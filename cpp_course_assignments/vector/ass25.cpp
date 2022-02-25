#include "ass25.h"

template<typename T>
void print_size(tVector<T>* arr)
{
	cout << "size: " << *arr->get_size() << endl;
}

template<typename T>
void print_arr(tVector<T>* arr)
{
	std::string outputstring = " ";

	for (int i = 0; i < *arr->get_size(); i++)
	{
		outputstring += " ";
		outputstring += to_string((*arr)[i]);
		outputstring += ",";
	}

	outputstring[outputstring.length () - 1] = '.';

	cout << outputstring << endl;
}

int main()
{
	tVector<int> someVector;
	someVector.custom_add (5);
	print_size (&someVector);
	someVector.custom_add (10);
	someVector.custom_add (12432);
	print_size (&someVector);
	print_arr (&someVector);
	someVector.custom_remove (10);
	print_arr (&someVector);
	someVector.custom_remove (15);
	print_arr (&someVector);
	return 0;
}