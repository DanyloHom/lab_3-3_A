#pragma once
#include "Vector3D.h"
class OpenDerive :
    public Vector3D
{
public:
	OpenDerive();
	OpenDerive(int x, int y, int z);
	OpenDerive(const OpenDerive& o);
	OpenDerive& operator ++();
	OpenDerive& operator --();
	OpenDerive operator ++(int);
	OpenDerive operator --(int);

	OpenDerive& operator = (const OpenDerive& o);
	operator string() const;

};

