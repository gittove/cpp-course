#include <iostream>
#include "ass2.h"

using namespace std;

int translate_celsius(int celsius)
{
	return celsius * 9 / 5 + 32;
}

int main()
{
	int celsius{ 36 };

	cout << celsius << " degrees Celsius is " << translate_celsius(celsius) << " degrees Fahrenheit." << endl;
	return 0;
}