#include "stdafx.h"
#include <iostream>

using namespace std;

void divider(int topNum)
{
	bool status = false;
	for (int i = 2521; ; i++)
	{

		for (int k = 1; k < topNum + 1; k++)
		{
			if (i % k != 0)
				break;
			if (k == topNum)
				cout << endl << i << " is divisible by 1-" << topNum << "." << endl;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int input;
	divider(20);
	cin >> input;
	return 0;
}
