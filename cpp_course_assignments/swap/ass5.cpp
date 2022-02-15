#include <iostream>
#include "ass5.h"

using namespace std;

int peepee{123};
int poopoo{321};

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
