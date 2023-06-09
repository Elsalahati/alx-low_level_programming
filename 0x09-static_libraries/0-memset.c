#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte b
 * @n: number of bytes in memory
 * @s: pointer pointing to the memory area
 * Return: s (pointer to memory area)
 **/

char *_memset(char *s, char b, unsigned int n)
{
	int p;

	for (p = 0; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
