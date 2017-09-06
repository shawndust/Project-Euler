// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <list>
#include <set>
using namespace std;

void logic(int passNum)
{
	std::set<int> Aset;
	cout << endl << "Creating List..." << endl;

	for (int k = 0; k < passNum - 2; k++)
	{
		Aset.insert(k + 2);
	}

	cout << endl << "Pruning List..." << endl;
	for (int i = 3; i < passNum; i++)
	{
		for (int t = 2; t < i; t++)
		{
			if (i % t == 0)
			{
				if (Aset.count(i) > 0)
				Aset.erase(i);
			}
		}
	}

	cout << endl << "Summing List..." << endl;
	int sum = 0;

	for (std::set<int>::iterator it = Aset.begin(); it != Aset.end(); ++it)
	{
//		std::cout << ' ' << *it << endl;
		sum += (int)* it;
	}
	cout << endl << "Sum is " << sum << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0;
	cout << flush;
	cout << "Thinking..." << endl;
	cout << flush;
	logic(2000000);
	cin >> input;
	return 0;
}
