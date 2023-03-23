#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten times in lower case
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int p;
	int i = 0;

	while (i <= 9)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
	_putchar('\n');
	i++;
	}
}
