#include "main.h"

/**
 * print_square - draws a square on the terminal
 * @size: size of the square
 * Return: square size up to the number of # and print a new line otherwise
 */

void print_square(int size)
{
	int p;
	int q;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < size; p++)
		{
			for (q = 0; q < size; q++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
