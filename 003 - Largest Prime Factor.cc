// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

// Test a given number for primality
bool isPrime(int testNum)
{
	for (int i = 2; i < testNum; i++)
	{
		if (testNum % i == 0)
			return false;
	}

	return true;
}

// Discover which factor is the largest
void largest_factor(int whichNum)
{
	int factors[1] = {  };
	int array_index = 0;
	int input = 0;

	for (int i = 2; i < whichNum; i++)
	{
		if (whichNum % i == 0)  // Is it a factor?
		{
			if (isPrime(i) == true)	// If so, is it a "Prime" factor?
			{
				array_index++;
				factors[array_index] = i;
			}
		}
	}

	cout << factors[array_index];

	cin >> input;
} 


int _tmain(int argc, _TCHAR* argv[])
{
	largest_factor(1475143);
	return 0;
}
