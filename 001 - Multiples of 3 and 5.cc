//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "iostream"
#include "istream"
#include "string"

using namespace std;

//Method takes topNum and returns all multiples of 3 or 5 less than it.
int printer(int topNum)
{
	int sum = 0;
	for (int i = 0; i < topNum; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		//	cout << i;
		//	cout << "\n";
			sum += i;
		}
			
	}

	cout << sum;
	return sum;
}


int _tmain(int argc, _TCHAR* argv[])
{
	printer(100);
	string wait_var;
	cin >> wait_var;
	return 0;
}
