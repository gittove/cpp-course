#include <iostream>
#include "ass7.h"

using namespace std;

int abs_value(int* value)
{
	if (*value < 0)
	{
		*value *= -1;
	}

	return *value;
}

int difference(int* value1, int* value2)
{
	int value = *value1 - *value2;
	return abs_value(&value);
}

bool arithmetic_check(vector<int>* values)
{
	int diff{ difference(&values->at(0), &values->at(1)) };

	for (int i = 1; i < values->size(); i++)
	{
		int temp{ i - 1 };
		if (difference(&values->at(temp), &values->at(i)) == diff)
		{
			continue;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{
	vector<int> numbers{ 2, 4, 6, 9 };
	bool is_arithmetic = arithmetic_check(&numbers);

	if (is_arithmetic)
	{
		cout << "The series has arithmetic progression." << endl;
	}
	else if (!is_arithmetic)
	{
		cout << "The series does not have arithmetic progression." << endl;
	}

	return 0;
}