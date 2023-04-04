#include "main.h"

/**
 * _strspn - locates a character in a string
 * @c: character looking for
 * @s: string looking for character inside
 * Return: s (success) and NULL (otherwise)
 **/

unsigned int _strspn(char *s, char *accept)
{
	int p = 0;

	for (; s[p] > '\0'; p++)
	{
		if (s[p] == c)
		{
			return (&s[p]);
		}
	}
	return (0);
}
