#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character looking for
 * @s: string looking for character inside
 * Return: s (success) and NULL (otherwise)
 **/

char *_strchr(char *s, char c)
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
