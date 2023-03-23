#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: upper case characters to search for
 * Return: 1 if condition is met and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
