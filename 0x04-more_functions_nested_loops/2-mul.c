#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first number to read
 * @b: second number to read
 * Return: result of multiplication and 0 otherwise
 */

int mul(int a, int b)
{
	int cross;

	if (a <= 48 && a >= 57)
	{
		if (b <= 48 && b >= 57)
		{
			cross = a * b;
			return (cross);
		}
	}
	return (0);
}
