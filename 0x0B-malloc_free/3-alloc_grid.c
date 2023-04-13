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
	int **arr;
	int w, x, y, z;

	if (width <= 0)
	{
		return ('\0');
	}
	if (height <= 0)
	{
		return ('\0');
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return ('\0');
	}
	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			for (y = x; y > -1; y--)
			{
				free(arr[y]);
			}
			free(arr);
			return ('\0');
		}
	}
	for (z = 0; z < height; z++)
	{
		for (w = 0 ; w < width; w++)
		{
			arr[z][w] = 0;
		}
	}
	return (arr);
}
