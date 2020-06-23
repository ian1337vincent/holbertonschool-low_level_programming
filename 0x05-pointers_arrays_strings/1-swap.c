#include "holberton.h"
/**
* swap_int - swaps the values of two integers
* @a: will change value to 42
* @b: will change value to 98
*/
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
	
}

