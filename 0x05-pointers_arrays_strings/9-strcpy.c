#include "main.h"

/**
 * _strcpy - prints an array
 * @dest: destination string
 * @src: source string
 * Return: the pointer to dest (destination string)
 **/

char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
