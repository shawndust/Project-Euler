// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include "stdafx.h"
#include <iostream>
using namespace std;

// Build list of even Fibonacci numbers.
int even_fibber(int topNum)
{
	// Define first three Fibonaaci numbers.
	int zero = 0;
	int one = 1;
	int two = 1;
	
	// Create empty array for the Fibonacci numbers.
	int fibs[1000] = {};
	fibs[0] = zero;
	fibs[1] = one;
	fibs[2] = two;

	int fib = 0;
	int even_fib_sum = 0;	// Running summation of even Fibonacci numbers.

	int input = 0;

	// Loop through all Fibonacci numbers until the proper sum has been reached.
	for (int i = 3; i < topNum; i++)
	{
		fibs[i] = fibs[i - 1] + fibs[i - 2];
		fib = fibs[i];

		if (fib%2 == 0){
			even_fib_sum += fib;
			cout << even_fib_sum << endl;
		}
	}

	cout << even_fib_sum;
	cin >> input;
	return even_fib_sum;

}

int _tmain(int argc, _TCHAR* argv[])
{
	even_fibber(40);
	return 0;
}
