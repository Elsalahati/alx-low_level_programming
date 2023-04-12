#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of a given array
 * @c: input char
 * Return: pointer to the array & NULL otherwise
 **/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == '0' || p == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
