#include "main.h"

/**
 * _strpbrk - searchs a string for a set of bytes
 * @accept: substring
 * @s: string looking for character inside
 * Return: s (success) and NULL (otherwise)
 **/

char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
