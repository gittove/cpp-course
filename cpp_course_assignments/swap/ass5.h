#pragma once

void swap_by_ref(int &a, int &b) 
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_by_pointer(int* a, int* b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_by_maths(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}