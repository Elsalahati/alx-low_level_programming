#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @accept: substring
 * @s: string looking for character inside
 * Return: s (success) and NULL (otherwise)
 **/

unsigned int _strspn(char *s, char *accept)
{
	int p;
	int k = 0;

	for (p = 0; s[p]; p++)
	{
		if (*s == accept[k])
		{
			k++;
			break;
		}
	}
	return (0);
}
