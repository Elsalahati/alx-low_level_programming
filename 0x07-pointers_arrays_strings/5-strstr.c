#include "main.h"

/**
 * _strstr - find the first occurance
 * @haystack: string looking inside for a certain occurence
 * @needle: substring
 * Return: s (success) and NULL (otherwise)
 **/

char *_strstr(char *haystack, char *needle)
{
	int p;

	while (*needle && *needle != '\0')
	{
		for (p = 0; haystack[p]; p++)
		{
			if (*needle == haystack[p])
			{
				return (needle);
			}
		}
		needle++;
	}
	return ('\0');
}
