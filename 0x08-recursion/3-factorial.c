#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: a given number
 * Return: the factorial of a number, -1 if number is below zero, and 1 if zero
 **/

int factorial(int n)
{
	int res = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		res = n * factorial(n - 1);
		return (res);
	}
}
