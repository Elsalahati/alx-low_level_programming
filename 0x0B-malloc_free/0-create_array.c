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
	unsigned int x;
	char *p = malloc(size * sizeof(char));

	if (size == '0' || p == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		p[x] = c;
	}
	return (p);
}
