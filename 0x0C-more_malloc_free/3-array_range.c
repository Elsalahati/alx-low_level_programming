#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: array of integers
 * @max: array of integers
 * Return: pointer to allocated memory & NULL otherwise
 **/

int *array_range(int min, int max)
{
	int *p;
	unsigned int x;
	unsigned int y;

	if (min > max)
	{
		return ('\0');
	}
	x = max - min + 1;
	p = malloc(sizeof(int) * x);
	if (p == NULL)
	{
		return ('\0');
	}
	for (y = 0; y < x; y++)
	{
		p[y] = min;
		min++;
	}
	return (p);
}
