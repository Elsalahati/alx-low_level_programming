#include "main.h"

/**
 * reverse_array - reverse the content of a given array of integers
 * @a: array
 * @n: number of elements in an array
 * Return: no specific return
 **/

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
