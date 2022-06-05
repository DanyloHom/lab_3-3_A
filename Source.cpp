#include <iostream>
#include "OpenDerive.h"
#include "CloseDerive.h"
using namespace std;

int main()
{
	OpenDerive b(1, 1, 1);
	cout << "first vector(open derive) = " << endl << b;

	cout << "second vector(close derive) = " << endl;
	CloseDerive a;
	cin >> a;

	cout << "a++" << endl << a++;
	cout << "a--" << endl << a--;
	cout << "++b" << endl << ++b;
	cout << "--b" << endl << --b;
}