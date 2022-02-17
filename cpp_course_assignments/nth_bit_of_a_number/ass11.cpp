#include <iostream>
#include "ass11.h"

int get (int* ref, const int nth)
{
	int value = (*ref >> nth) & 1;
	return value;
}

void set (int* ref, const int nth)
{
	*ref |= 1 << nth;
}

int main ()
{
	int value{ 4 };
	int* ptr = &value;
	constexpr int nth{ 3 };

	std::cout << "Setting the 4th bit..." << std::endl;
	set (ptr, nth);
	std::cout << "New value: " << *ptr << std::endl;
	std::cout << "Getting the 4th bit: " << get (ptr, nth) << std::endl;

	return 0;
}