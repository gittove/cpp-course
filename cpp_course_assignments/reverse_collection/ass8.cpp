#include <iostream>
#include "ass8.h"

std::string hello{ "Hello" };

void swap_char(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse_string(std::string* container, int length)
{
	for (int i = 0; i < length / 2; i++)
	{
		swap_char(&container->at(i), &container->at(length - i - 1));
	}
}

int get_length(std::string arr)
{
	int n{};

	for(char ch : arr)
	{
		++n;
	}

	return n;
}

int main()
{
	std::string* ptr = &hello;
	int length = get_length (hello);
	reverse_string(ptr, length);

	std::cout << "Reversed string: " << hello << std::endl;
	return 0;
}