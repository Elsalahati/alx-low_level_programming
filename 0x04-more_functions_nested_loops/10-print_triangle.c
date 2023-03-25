#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal
 * @size: size of the triangle
 * Return: triangle size up to the number of # and print a new line otherwise
 */

void print_triangle(int size)
{
	int rows;
	int columns;
	int sign;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (columns = size - rows; columns > 1; columns--)
			{
				_putchar(32);
			}
				for (sign = 0; sign <= rows ; sign++) 
				{
					_putchar('#');
				}
		_putchar('\n');
		}
	}
}
