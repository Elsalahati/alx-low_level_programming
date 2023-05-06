#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints binary or a number
 * @n: integer number
 * Return: no return
 **/

void print_binary(unsigned long int n)
{
	if (n >= 2)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
