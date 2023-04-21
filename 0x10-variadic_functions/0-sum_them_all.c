#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - gets the sum for all of its parameters
 * @n: input number
 * @...: ellipsis (number of arguments)
 * Return: sum of the the parametes
 **/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list y;

	va_start(y, n);
	if (n == 0)
	{
		return (0);
	}
	for (x = 0; x < n ; x++)
	{
		sum = sum + va_arg(y, int);
	}
	va_end(y);
	return (sum);
}
