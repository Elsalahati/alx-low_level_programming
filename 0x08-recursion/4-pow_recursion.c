#include "main.h"

/**
 * _pow_recursion - returns the result of number power another number
 * @x: a given number
 * @y: the power of the number
 * Return: the result of powered number, -1 if number is below zero
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
