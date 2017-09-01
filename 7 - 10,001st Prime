#include "stdafx.h"
#include <iostream>
using namespace std;

bool isPrime(int input)
{
	for (int i = 2; i < input; i++)
	{
		if (input % i == 0)
			return false;
	}

	return true;
}

void logic(int input)
{
	cout << endl << "thinking..." << endl;
	int i = 1;
	do
	{
		for (int k = 1;; k++)
		{
			if (isPrime(k) == true)
			{
			//	cout << i << "th prime is " << k << endl;
				i++;
				if (i >= input)
				{
					cout << i << "th prime is " << k << endl;
					int pause;
					cin >> pause;
				}
			}

		}

	} while (true);
  
}

int _tmain(int argc, _TCHAR* argv[])
{
	int input;
	logic(10001);
	cin >> input;
	return 0;
}
