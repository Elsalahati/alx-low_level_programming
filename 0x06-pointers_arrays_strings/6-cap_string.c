#include "main.h"

/**
 * cap_string - changes lower case characters if not other characters
 * @c: lower alphabetical characters
 * Return: c (sucess)
 **/

char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
			i++;
		if (c[i - 1] == ' ' ||
		c[i - 1] == ',' ||
		c[i - 1] == ';' ||
		c[i - 1] == '.' ||
		c[i - 1] == '!' ||
		c[i - 1] == '?' ||
		c[i - 1] == '"' ||
		c[i - 1] == '(' ||
		c[i - 1] == ')' ||
		c[i - 1] == '{' ||
		c[i - 1] == '}' ||
		c[i - 1] == '\t' ||
		c[i - 1] == '\n' ||
		i == 0)
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
