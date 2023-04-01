#include "main.h"

/**
 * leet - encodes a string into 1337integer
 * @c: character to compare with
 * Return: c (sucess)
 **/

char *leet(char *c)
{
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";
	int i;
	int j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == x[j])
			{
				c[i] = y[j];
			}
		}
	}
	return (c);
}
