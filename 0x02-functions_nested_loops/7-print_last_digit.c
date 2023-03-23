#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: a given number to check
 * Return: the last digit of a given number
 */

int print_last_digit(int i)
{
	int bittt;

	bittt = -(i % 10);
	if (bittt < 0)
	{
		bittt = (bittt * -1);
	}
	_putchar(bittt + '0');
	return (bittt);
}
