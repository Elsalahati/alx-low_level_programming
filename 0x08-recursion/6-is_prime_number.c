#include "main.h"

/**
 * is_prime_number - check if number is prime or not
 * @n: a given number
 * @h: divisor
 * Return: 1 if number is prime, and 0 otherwise
 **/

int _prime(int n, int h);
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - calculates and gets the natural square root of number
 * @n: a given number
 * @h: divisor
 * Return: 1 if number is prime, and 0 otherwise
 **/

int _prime(int n, int h)
{
	if (h >= n && n >= 2)
	{
		return (1);
	}
	else if (n % h == 0 || n < 2)
	{
		return (0);
	}
	else
	{
		return (_prime(n, (h + 1)));
	}
}
