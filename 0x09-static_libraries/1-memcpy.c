#include "main.h"

/**
 * _memcpy - copies memory from source into destination
 * @src: source memory area
 * @n: number of bytes to be copied
 * @dest: destination memory area
 * Return: dest (pointer to memory area)
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p;
	int k = n;

	for (p = 0; p < k; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
