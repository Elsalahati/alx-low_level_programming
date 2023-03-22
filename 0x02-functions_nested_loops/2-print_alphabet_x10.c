#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int p;
	int i = 0;

	while (i < 10)
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
	i++;
	_putchar('\n');
}
