#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: input number od intergers
 * @...: ellipsis (number of arguments)
 * Return: no return
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list numbs;

	va_start(numbs, n);
	for (x = 0; x < n ; x++)
	{
		printf("%d", va_arg(numbs, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbs);
}
