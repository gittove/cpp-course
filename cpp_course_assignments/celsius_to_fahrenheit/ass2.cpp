#include <iostream>
#include "ass2.h"

using namespace std;

int celsius{ 36 };

void main()
{
	cout << celsius << " degrees Celsius is " << translate_celsius(celsius) << " degrees Fahrenheit." << endl;
}