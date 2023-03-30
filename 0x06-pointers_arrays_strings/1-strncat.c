#include "main.h"

/**
 * _strncat - concatenates two strings with each other
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: the pointer to dest (destination string)
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int p = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[p] = src[i];
		p++;
		i++;
	}
	dest[p] = '\0';
	return (dest);
}
