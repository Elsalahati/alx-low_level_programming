#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: input number of strings
 * @...: ellipsis (number of arguments)
 * Return: no return
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list strlist;
	char *strptr;

	va_start(strlist, n);
	for (x = 0; x < n ; x++)
	{
		strptr = va_arg(strlist, char *);
		if (strptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strptr);
		}
		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strlist);
}
