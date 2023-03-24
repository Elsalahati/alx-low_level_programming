#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ character should be printed
 * Return: \ up to the number of n and print a new line otherwise
 */

void print_diagonal(int n)
{
	int p;
	int q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (q = 0; q < p; q++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
