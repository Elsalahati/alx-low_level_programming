#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - allocates space in memory
 * @s1: pointer for first string
 * @s2: pointer for second string
 * @n: input number of bytes
 * Return: pointer to allocated memory & NULL otherwise
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1, l2;
	unsigned int length1, length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;
	p = malloc(length1 + n + 1);
	if (p == NULL)
	{
		return ('\0');
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		p[l1] = s1[l1];
	}
	for (l2 = 0 ; l2 < n; l2++)
	{
		p[l1] = s2[l2];
		l1++;
	}
	p[l1] = '\0';
	return (p);
}
