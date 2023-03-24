#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of lines the character _ will be printed
 * Return: _ up to the number of n and nothing otherwise
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
