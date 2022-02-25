#include <iostream>
#include "ass5.h"

using namespace std;

int peepee{123};
int poopoo{321};

void swap_by_maths (int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void swap_by_pointer (int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_by_ref (int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	cout << "Swapping: " << endl << peepee << endl << poopoo << endl;


	// STL solution: swap(peepee, poopoo);

	// ref solution: swap_by_ref(peepee, poopoo);

	// pointer solution: swap_by_pointer(&peepee, &poopoo);

	// maths solution:

	swap_by_maths(&peepee, &poopoo);

	cout << "Swapped: " << endl << peepee << endl << poopoo << endl;
}
