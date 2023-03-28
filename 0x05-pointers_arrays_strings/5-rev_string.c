#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: a given string
 * Return: a given string in reverse
 **/

void rev_string(char *s)
{
	int p = 0;

	while (s[p])
	{
		p++;
	}
	for (*s = '\0'; *s > s[p]; s--)
	{
		_putchar (*s + 0);
	}
}
