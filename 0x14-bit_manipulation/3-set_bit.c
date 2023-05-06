#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: the pointing to bit
 * @index: the index starting from 0
 * Return: value of bit at index, -1 otherwise
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n = (*n | 1 << index);
	return (1);
}
