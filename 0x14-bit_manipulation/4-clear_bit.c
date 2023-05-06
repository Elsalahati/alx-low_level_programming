#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets a value of a bit to 0
 * @n: the pointing to bit
 * @index: the index starting from 0
 * Return: value of bit at index, -1 otherwise
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
