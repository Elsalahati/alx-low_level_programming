#include "main.h"

/**
 * _strlen - gets the size of a given string
 * @s: a given string
 * Return: length of the a given string
 **/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
