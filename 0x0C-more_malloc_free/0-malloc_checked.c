#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates space in memory
 * @b: memory size to be allocated
 * Return: pointer to allocated memory & 98 otherwise
 **/

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
