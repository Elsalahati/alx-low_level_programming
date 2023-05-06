#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - return value of a bit at a given index
 * @n: the desired bit
 * @index: the index starting from 0
 * Return: value of bit at index, -1 otherwise
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
