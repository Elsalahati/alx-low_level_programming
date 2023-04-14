#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: space to allocate
 * @size: size to be assigned
 * Return: pointer to allocated memory & NULL otherwise
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	x = nmemb * size;
	ptr = malloc(x);
	if (ptr == NULL)
	{
		return ('\0');
	}
	for (y = 0; y < x; y++)
	{
		ptr[y] = 0;
	}
	return (ptr);
}
