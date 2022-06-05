#include "OpenDerive.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

OpenDerive::OpenDerive()
{
	setX(0);
	setY(0);
	setZ(0);
}

OpenDerive::OpenDerive(int x, int y, int z)
{
	setX(x);
	setY(y);
	setZ(z);
}

OpenDerive::OpenDerive(const OpenDerive& o)
{
	setX(o.getX());
	setY(o.getY());
	setZ(o.getZ());
}

OpenDerive& OpenDerive::operator++()
{
	int i = getX();
	setX(++i);
	i = getY();
	setY(++i);
	i = getZ();
	setZ(++i);
	return *this;
}

OpenDerive& OpenDerive::operator--()
{
	int i = getX();
	setX(--i);
	i = getY();
	setY(--i);
	i = getZ();
	setZ(--i);
	return *this;
}

OpenDerive OpenDerive::operator++(int)
{
	OpenDerive tmp(*this);
	int i = getX();
	setX(++i);
	i = getY();
	setY(++i);
	i = getZ();
	setZ(++i);

	return tmp;
}

OpenDerive OpenDerive::operator--(int)
{
	OpenDerive tmp(*this);
	int i = getX();
	setX(--i);
	i = getY();
	setY(--i);
	i = getZ();
	setZ(--i);

	return tmp;
}

OpenDerive& OpenDerive::operator=(const OpenDerive& o)
{
	setX(o.getX());
	setY(o.getY());
	setZ(o.getZ());

	return *this;
}

OpenDerive::operator string() const
{
	stringstream sout;

	sout << "x = " << getX() << " , y = " << getY() << " , z = " << getZ() << endl;

	return sout.str();

}
