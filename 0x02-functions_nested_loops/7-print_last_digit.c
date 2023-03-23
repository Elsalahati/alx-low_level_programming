#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: a given number to check
 * Return: the last digit of a given number
 */

int print_last_digit(int i)
{
	int digit;

	digit = i % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (i);
}
