#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
