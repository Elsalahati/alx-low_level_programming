#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - freeing 2D grid
 * @grid: two-dimensional array pointer
 * @height: string two
 * Return: no return
 **/

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
