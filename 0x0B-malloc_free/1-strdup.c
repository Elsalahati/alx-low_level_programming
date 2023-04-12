#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a given string pointer
 * Return: pointer to the string & NULL otherwise
 **/

char *_strdup(char *str)
{
	int x = 0;
	int size;
	char *p;

	if (str == 0)
	{
		return ('\0');
	}
	for (size = 0; str[size] != 0; size++)
		;
	p = malloc(size * sizeof(*str) + 1);
	if (p == NULL)
	{
		return ('\0');
	}
	else
	{
		while (x < size)
		{
			p[x] = str[x];
			x++;
		}
	}
	return (p);
}
