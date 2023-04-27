#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of input arguments types
 * @...: ellipsis (number of arguments)
 * Return: no return
 **/

void print_all(const char * const format, ...)
{
	int arg_ptr = 0;
	char *separator = "";
	char *strptr = "";
	va_list input_args;

	va_start(input_args, format);
	if (format)
	{
		while (format[arg_ptr])
		{
			switch (format[arg_ptr])
			{
				case 'c':
					printf("%s%c", separator, va_arg(input_args, int));
						break;
				case 'i':
					printf("%s%d", separator, va_arg(input_args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(input_args, double));
					break;
				case 's':
					strptr = va_arg(input_args, char *);
					if (!strptr)
					{
						strptr = "(nil)";
						printf("%s%s", separator, strptr);
					}
					break;
				default:
					arg_ptr++;
			}
			separator = ", ";
			arg_ptr++;
		}
	}
	printf("\n");
	va_end(input_args);
}
