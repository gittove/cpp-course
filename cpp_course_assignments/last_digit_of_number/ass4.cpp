#include <iostream>;
#include "ass4.h";

using namespace std;

int get_last_digit(int value)
{
	return value % 10;
}


int main()
{
	int value{ 154237 };

	cout << "The last digit is: " << get_last_digit(value) << endl;

	return 0;
}