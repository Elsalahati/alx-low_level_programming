#include "main.h"

/**
 * swap_int - swaps two integers with each other
 * @a: first pointer object
 * @b: second pointer object
 **/

void swap_int(int *a, int *b)
{
	int cup;

	cup = *a;
	*a = *b;
	*b = cup;

}
