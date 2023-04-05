#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: input 2D array
 * @size: size of given 2D array
 * Return: no return (void)
 **/

void print_diagsums(int *a, int size)
{
	int arr[j][k];
	int j;
	int k;
	int backdiag = 0;
	int frontdiag = 0;

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			if (j == k)
			{
				backdiag = backdiag + a[j][k];
			}
			if (j + k == (size - 1))
			{
				frontdiag = frontdiag + a[j][k];
			}
		}
	}
}
