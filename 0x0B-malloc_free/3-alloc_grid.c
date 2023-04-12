#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates and points to a two-dimensional array of ints.
 * @width: string one
 * @height: string two
 * Return: pointer to the array of strings & NULL otherwise
 **/

int **alloc_grid(int width, int height)
{
	char arr[][];
	int w, x, y, z;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	arr = malloc(sizeof(int*) * height);
	if (arr == '\0')
	{
		free(arr);
		return ('\0');
	}
	
	p[w] = '\0';
	return (p);
}
