#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: a given string
 * Return: a given string in reverse
 **/

void rev_string(char *s)
{
	int p = 0;
	int l = 0;
	char rev;

	while (s[p++])
	{
		l++;
	}
	for (p = l - 1; p >= l / 2; p--)
	{
		rev = s[p];
		s[p] = s[l - p - 1];
		s[l - p - 1] = rev;
	}
}
