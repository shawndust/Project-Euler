#include "stdafx.h"
#include <iostream>
using namespace std;

int sum_of_squares(int number)
{
	int sum = 0;
	for (int i = 1; i < number + 1; i++)
	{
		sum += i ^ 2;
	}
//	cout << endl << "sum of squares = " << sum << endl;
	return sum;
}

int square_of_sum(int number)
{
	int sum = 0;
	int returnNum;
	for (int i = 1; i < number + 1; i++)
	{
		sum += i;
	}

	returnNum = sum ^ 2;
//	cout << endl << "square of sum = " << returnNum << endl;
	return returnNum;
}

void logic(int number)
{
	int sumSquare = sum_of_squares(number);
	int squareSum = square_of_sum(number);
	int difference = squareSum - sumSquare;

	cout << endl << difference << endl;

}

int _tmain(int argc, _TCHAR* argv[])
{
	int input;
	logic(100);
	cin >> input;
	return 0;
}
