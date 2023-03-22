#include "main.h"

/**
 * _islower - checks if a lower case character is found or not
 * @c: character to search for
 * Return: 1 if condition is met and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
