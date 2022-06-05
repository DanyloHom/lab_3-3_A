#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Vector3D::Vector3D()
{
	x = y = z = 0;
}

Vector3D::Vector3D(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3D::Vector3D(const Vector3D& v)
{
	*this = v;
}

void Vector3D::setX(int value)
{
	x = value;
}

void Vector3D::setY(int value)
{
	y = value;
}

void Vector3D::setZ(int value)
{
	z = value;
}

Vector3D Vector3D::ScalMultiplay(int value)
{
	Vector3D a;

	a.x = this->x * value;
	a.y = this->y * value;
	a.z = this->z * value;

	return a;
}

double Vector3D::Len()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}


bool Equal(Vector3D l, Vector3D r)
{
	return l.Len() == r.Len();
}

bool NEqual(Vector3D l, Vector3D r)
{
	return !(l.Len() == r.Len());
}

ostream& operator<<(ostream& out, const Vector3D& v)
{
	out << "x = " << v.getX() << " , y = " << v.getY() << " , z = " << v.getZ() << endl;

	return out;
}

istream& operator>>(istream& in, Vector3D& v)
{
	cout << "x = "; in >> v.x;
	cout << "y = "; in >> v.y;
	cout << "z = "; in >> v.z;

	return in;
}

bool Compare(Vector3D l, Vector3D r)
{
	return (l.x == r.x && l.y == r.y && l.z == r.z);
}

bool Less(Vector3D l, Vector3D r)
{
	return l.Len() < r.Len();
}

bool NLess(Vector3D l, Vector3D r)
{
	return !(l.Len() < r.Len());
}

bool Greate(Vector3D l, Vector3D r)
{
	return l.Len() > r.Len();
}

bool NGreate(Vector3D l, Vector3D r)
{
	return !(l.Len() > r.Len());
}

