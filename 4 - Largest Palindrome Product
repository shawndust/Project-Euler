// Euler 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <array>

using namespace std;

int nines(int num_digits)
{
	string nines = "";
	for (int i = 0; i < num_digits; i++)
	{
		nines += '9';
	}

	int i_nines = std::stoi(nines, nullptr, 0);
	//	cout << i_nines;

	return i_nines;
}

int multiplier(int input_number)
{
	int multiplier = nines(input_number);
//	cout << multiplier << endl;
	int max_product = multiplier*multiplier;

	return max_product;
}

int biggestPalindrome(int max_num)
{
	int num_length;
	string maxNumString;

	string string1;
	string string2;
	
	for (int i = max_num; i > 0; i--) ///// max_num
	{
		int counter = 0;
		num_length = to_string(i).length();
		// Convert max_num to string for evaluation
		maxNumString = to_string(i);

		for (int k = 0; k < (num_length) / 2; )
		{
			string1 = maxNumString[k];
			string2 = maxNumString[num_length - 1 - k];
			if (string1.compare(string2) != 0)
			{
//				cout << maxNumString << " " << string1 << " " << string2 << " nope" << endl;
				break;
			}

			else
			{
				k++;
//				cout << maxNumString << " " << string1 << " " << string2 << " yep" << endl;
				if (k >= ((num_length) / 2))
					return i;
			}
		}
	}

	return -1;
}

int *biggestMultiples(int bigNum){
	int counter = 0;
	int *multiplesArray = new int[1000];
	for (int i = (bigNum / 2) + 1; i > 0; i--)
	{
		if (bigNum % i == 0)
		{
			multiplesArray[counter] = i;
	//		cout << endl << "counter is " << counter << endl;
			counter++;
		}
	}

	return multiplesArray;
}

void control(int pass_num)
{
	
	int maxProduct = multiplier(pass_num);
//	cout << maxProduct << " maxProduct" << endl;

	int max_pal = biggestPalindrome(maxProduct);
//	cout << endl << max_pal << " max_Palindrome";

	bool status = true;
	while (status == true)
	{
		int *multiples = biggestMultiples(max_pal); // Is this palindrome the product of two 3-digit numbers?
//		cout << endl << multiples[0] << ", " << multiples[1] << " 1st 2 multiples" << endl; // 
		int num_elements = sizeof(multiples) / sizeof(multiples[0]);

		for (int i = 0; i < num_elements; i++) // need i <  sizeof array instead
		{
			int test_num1 = multiples[i];
			int num_length1 = to_string(test_num1).length();
//			cout << endl << test_num1 << " test_num1 " << endl;

			int test_num2 = max_pal / multiples[i];
			int num_length2 = to_string(test_num2).length();
//			cout << endl << test_num2 << " test_num2 " << endl;

//			cout << endl << " 2 lengths " << num_length1 << " , " << num_length2 << endl;

			if (num_length1 == 3 && num_length2 == 3)
			{
				cout << endl << "The largest palindrome made from the product of two 3-digit numbers is " << max_pal << " and its factors are " << test_num1 << " and " << test_num2 << "." << endl;
				status = false; // exit the loop
			}
		}
//		cout << endl << "old MaxPal is " << max_pal << endl;
		cout << std::flush;
		max_pal = biggestPalindrome(max_pal - 2);
//		cout << "New MaxPal is " << max_pal << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int input;
	cout << "thinking..." << endl;
	control(3);
//	nines(3);

	cin >> input;
	return 0;
}
