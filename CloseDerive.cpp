#include <iostream>
#include"CloseDerive.h"
#include <string>
#include <sstream>
using namespace std;

CloseDerive::CloseDerive()
{
	setX(0);
	setY(0);
	setZ(0);
}

CloseDerive::CloseDerive(int x, int y, int z)
{
	setX(x);
	setY(y);
	setZ(z);
}

CloseDerive::CloseDerive(const CloseDerive& o)
{
	setX(o.getX());
	setY(o.getY());
	setZ(o.getZ());
}

CloseDerive& CloseDerive::operator++()
{
	cout << "working " << endl;
	int i = getX();
	setX(++i);
	i = getY();
	setY(++i);
	i = getZ();
	setZ(++i);
	return *this;
}

CloseDerive& CloseDerive::operator--()
{
	cout << "working " << endl;

	int i = getX();
	setX(--i);
	i = getY();
	setY(--i);
	i = getZ();
	setZ(--i);
	return *this;
}

CloseDerive CloseDerive::operator++(int)
{
	cout << "working " << endl;

	CloseDerive tmp(*this);
	int i = getX();
	setX(++i);
	i = getY();
	setY(++i);
	i = getZ();
	setZ(++i);
	return tmp;
}

CloseDerive CloseDerive::operator--(int)
{
	cout << "working " << endl;

	CloseDerive tmp(*this);
	int i = getX();
	setX(--i);
	i = getY();
	setY(--i);
	i = getZ();
	setZ(--i);

	return tmp;
}

CloseDerive& CloseDerive::operator=(const CloseDerive& o)
{
	setX(o.getX());
	setY(o.getY());
	setZ(o.getZ());
	return *this;
}

CloseDerive::operator string() const
{
	stringstream sout;

	sout << "x = " << getX() << " , y = " << getY() << " , z = " << getZ() << endl;

	return sout.str();

}

ostream& operator<<(ostream&, const CloseDerive& v)
{
	return cout << string(v);

}

istream& operator>>(istream& in, CloseDerive& v)
{
	int x, y, z;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	cout << "z = "; in >> z;

	v.setX(x);
	v.setY(y);
	v.setZ(z);

	return in;

}
