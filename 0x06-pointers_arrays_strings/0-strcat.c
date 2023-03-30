#include "main.h"

/**
 * _strcat - concatenates two strings with each other
 * @dest: destination string
 * @src: source string
 * Return: the pointer to dest (destination string)
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int p = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[i] != '\0')
	{
		dest[p] = src[i];
		p++;
		i++;
	}
	dest[p] = '\0';
	return (dest);
}
