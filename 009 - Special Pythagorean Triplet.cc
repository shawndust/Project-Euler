#include "stdafx.h"
#include <iostream>
using namespace std;

// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
//
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

void logic()
{
	for (int a = 4; a < 1000; a++)
	{
		for (int b = 5; b < 1000; b++)
		{
			for (int c = 6; c < 1000; c++)
			{
				if (a*a + b*b == c*c)
				{
				//	cout << endl << "a " << a << "\t" << b << "\t" << c << endl;
					if (a < b && b < c)
						if (a + b + c == 1000)
						{
							cout << endl << "a " << a << "\tb " << b << "\tc " << c << endl;
							cout << endl << "a x b x c = " << a * b * c << endl;
						}
				}
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int input;
	logic();
	cin >> input;
	return 0;
}
