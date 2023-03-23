#include "main.h"

/**
 * more_numbers - print numbers from zero to fourteen
 * Return: numbers from 0 to fourteen
 */

void more_numbers(void)
{
	int l = 0;
	int n;

	while (l < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	l++;
	}
}
