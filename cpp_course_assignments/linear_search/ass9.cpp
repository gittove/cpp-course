#include <iostream>
#include "ass9.h"

void linear_search(std::vector<int>& collection, int value)
{

	for (int i = 0; i < collection.size(); i++)
	{
		if (collection[i] == value)
		{
			std::cout << "Value found at index " << i << std::endl;
		}
	}
}


int main()
{
	std::vector<int> arr{1,3,5,1,7};
	int searchvalue{1};

	linear_search(arr, searchvalue);
	return 0;
}
