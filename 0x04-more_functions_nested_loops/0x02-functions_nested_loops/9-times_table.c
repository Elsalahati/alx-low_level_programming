#include "main.h"

/**
 * times_table - print times table until table nine
 * Return: the value of each multiplication and 0 otherwise
 */

void times_table(void)
{
	int p;
	int i;
	int value;

	for (p = 0; p <= 9; p++)
	{
		for (i = 0; i <= 9; i++)
		{
			value = p * i;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			return (value);
		}
	_putchar('\n');
	p++;
	}
	return (0);
}
