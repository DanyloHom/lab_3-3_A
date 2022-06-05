#pragma once
#include "Vector3D.h"
class CloseDerive :
    private Vector3D
{
public:
	CloseDerive();
	CloseDerive(int x, int y, int z);
	CloseDerive(const CloseDerive& o);
	CloseDerive& operator ++();
	CloseDerive& operator --();
	CloseDerive operator ++(int);
	CloseDerive operator --(int);

	CloseDerive& operator = (const CloseDerive& o);
	operator string() const;

	friend ostream& operator <<(ostream&, const CloseDerive& v);
	friend istream& operator >>(istream&, CloseDerive& v);
};

