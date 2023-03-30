#include "main.h"

/**
 * _strcat - concatenates two strings with each other
 * @dest: destination string
 * @src: source string
 * Return: the pointer to dest (destination string)
 **/

char *_strcat(char *dest, char *src)
{
	int i;
	int p;

	for (i = -1; src[i] != '\0'; i++)
	{
		i++;
	}
	for (p = -1; p != '\0'; p++)
	{
		dest[p] = src[i];
	}
	return (dest);
}
