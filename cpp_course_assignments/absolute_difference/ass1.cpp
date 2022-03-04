#include <iostream>
#include "ass1.h"

using namespace std;

short int A{ -6 };
short int B{ 4 };

int abs_value(int value)
{
	if (value < 0)
	{
		value *= -1;
	}

	return value;
}

int diff(int x, int y)
{
	return abs_value (y - x);
}

int main()
{
	int difference = diff(A ,B);

	cout << "The difference between value A (" << A << ") and value B (" << B <<  ") is " << difference << endl;
	return 0;
}

