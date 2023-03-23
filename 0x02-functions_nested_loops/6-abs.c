#include "main.h"

/**
 * _abs - gets the absolute value of a number
 * @n: negative number to get its absolute value
 * Return: Always 0 (sucess)
 */

int _abs(int n)
{
	if (n < 0)
	{
		int absnumb;

		absnumb = n * -1;
		return (absnumb);
	}
	return (0);
}
