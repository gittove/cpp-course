#include "ass25.h"
#include <string>
#include <iostream>

using namespace std;

template<typename T>
void print_size(tVector<T>* arr)
{
	cout << "size: " << (*arr).get_size() << endl;
}

template<typename T>
void print_arr(tVector<T>* arr)
{
	string outputstring = " ";

	for (int i = 0; i < (*arr).get_size(); i++)
	{
		outputstring += " ";
		outputstring += (*arr)[i];
		outputstring += ",";
	}

	outputstring[outputstring.length () - 1] = '.';

	cout << outputstring << endl;
}

int main()
{
	tVector<string> someVector;
	someVector.custom_add ("Hello ");
	someVector.custom_add ("Even more hello yes hi i am long");
	someVector.custom_add ("aaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	print_arr (&someVector);

	tVector<string> anotherVector{ someVector };
	cout << anotherVector[10];
	print_arr (&anotherVector);

	/*tVector<int> someVector;
	someVector.custom_add (5);
	print_size (&someVector);
	someVector.custom_add (10);
	someVector.custom_add (12432);
	print_arr (&someVector);

	std::cout << "copying to new vector" << std::endl;
	tVector<int> anotherVector{ someVector };
	print_size (&anotherVector);
	print_arr (&anotherVector);
	anotherVector.custom_remove (10);
	print_arr (&anotherVector);
	anotherVector.custom_remove (15);
	print_arr (&anotherVector);*/
	return 0;
}