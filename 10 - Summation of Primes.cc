// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include "stdafx.h"
#include <iostream>
using namespace std;

void logic(int passNum)
{
	int sum = 0;
	int tracker = 0;
	for (int p = 2; p < passNum; p++)
	{
		tracker = 0;
		for (int i = p - 1; i > 1; i--)
		{
			if (p % i == 0)
				tracker += 1;
		}

		if (tracker == 0)
		{
			sum += p;
	//		cout << endl << "Sum is " << sum << "\t" << p << endl;
		}
	}

	cout << endl << sum << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int input;
	cout << "Thinking...";
	logic(2000000);
	cin >> input;
	return 0;
}
