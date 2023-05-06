#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary into unsigned integer
 * @b: pointer to string of binary numbers
 * Return: the converted number, 0 otherwise
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int k;

	if (b == NULL)
	{
		return (0);
	}
	for (k = 0; b[k]; k++)
	{
		if (b[k] < 48 || b[k] > 49)
		{
			return (0);
		}
		dec = dec * 2 + (b[k] - '0');
	}
	return (dec);
}
