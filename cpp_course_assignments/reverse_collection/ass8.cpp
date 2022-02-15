#include <iostream>
#include "ass8.h"
#include <string>

std::string hello{ "Hello" };

void swap_char(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

std::string reverse_string(std::string* container)
{
	size_t n = container->length();

	for (int i = 0; i < n / 2; i++)
	{
		swap_char(&container->at(i), &container->at(n - i - 1));
	}

	return *container;
}


int main()
{
	reverse_string(&hello);

	std::cout << "Reversed string: " << hello << std::endl;
	return 0;
}