#include "main.h"

/**
 * _sqrt_recursion - gets natural square of a given number
 * @n: a given number
 * @h: the square root itself
 * Return: a number
 **/

int squareroot(int n, int h);
int _sqrt_recursion(int n)
{
	return (squareroot(n, 0));
}

/**
 * squareroot - calculates and gets the natural square root of number
 * @n: a given number
 * @h: the square root itself
 * Return: return the square root of a number, and -1 otherwise
 **/

int squareroot(int n, int h)
{
	if (h * h == n)
	{
		return (h);
	}
	else if (h * h < n)
	{
		return (squareroot(n, (h + 1)));
	}
	else
	{
		return (-1);
	}
}
