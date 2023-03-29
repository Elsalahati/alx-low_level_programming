#include "main.h"

/**
 * _strcpy - prints an array
 * @dest: destination string
 * @src: source string
 * Return: the pointer to dest (destination string)
 **/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
