#include <iostream>
#include "ass1.h"

using namespace std;

short int A{ -6 };
short int B{ 4 };


int main()
{
	int difference = diff(A ,B);

	cout << "The difference between value A (" << A << ") and value B (" << B <<  ") is " << difference << endl;
}

