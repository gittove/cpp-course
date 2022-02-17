#include <iostream>
#include "ass12.h"

void swap_bit(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int value1{};
	int value2{};

	std::cout << "Insert first number: " << std::endl;
	std::cin >> value1;
	std::cout << std::endl << "Insert second number: " << std::endl;
	std::cin >> value2;

	std::cout << "Values before swap. Value 1: " << value1 << ". Value 2: " << value2 << std::endl;
	swap_bit (&value1, &value2);
	std::cout << "Values are swapped. Value 1: " << value1 << ". Value 2: " << value2 << std::endl;

	return 0;
}