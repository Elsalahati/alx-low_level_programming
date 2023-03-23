#include "main.h"

/**
 * _isalpha - check for alphabetical characters
 * @c: character to search for
 * Return: 1 if condition is met and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
