#include "stdafx.h"
#include <iostream>
using namespace std;

int logic(int passNum)
{
	for (int i = 1; ; i++)
	{
//		cout << i << endl;
		int sum = 0;	// Sum up how many divisors for a given number.
		for (int j = 1; j < i; j++)
		{
//			cout << j << endl;
			if (i % j == 0)
			{
				sum++;
				cout << sum << "\t" << j << endl;
			}

			if (sum > passNum)
				return i;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int number;
	number = logic(500);
	cout << number;
	int input;
	cin >> input;
	return 0;
}
