#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to the string & NULL otherwise
 **/

char *str_concat(char *s1, char *s2)
{
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	char *p;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (; s1[x] != '\0'; x++)
		;
	for (; s2[y] != '\0'; y++)
		;
	z = x + y;
	p = malloc((sizeof(char) * z) + 1);
	if (p == NULL)
	{
		return ('\0');
	}
	y = 0;
	while (w < z)
	{
		if (w <= x)
		{
			p[w] = s1[w];
		}
		if (w >= x)
		{
			p[w] = s2[y];
			y++;
		}
		w++;
	}
	p[w] = '\0';
	return (p);
}
