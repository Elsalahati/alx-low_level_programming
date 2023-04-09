#include "main.h"

/**
 * _strstr - find the first occurance
 * @haystack: string looking inside for a certain occurence
 * @needle: substring
 * Return: haystack (success) and NULL (otherwise)
 **/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *z = needle;

		while (*y == *z && *z != '\0')
		{
			y++;
			z++;
		}
		if (*z == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
