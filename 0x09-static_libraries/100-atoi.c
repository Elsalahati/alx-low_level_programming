#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: pointer input
 * Return: integer
 **/

int _atoi(char *s)
{
	int neg = 1;
	int p = 0;
	unsigned int value = 0;

	while (!(s[p] <= '9' && s[p] >= '0') && (s[p] != '\0'))
	{
		if (s[p] == '-')
		{
			neg *= -1;
		}
		p++;
	}
	while (s[p] <= '9' && (s[p] >= '0' && s[p] != '\0'))
	{
		value = (value * 10) + (s[p] - '0');
		p++;
	}
	value *= neg;
	return (value);
}
