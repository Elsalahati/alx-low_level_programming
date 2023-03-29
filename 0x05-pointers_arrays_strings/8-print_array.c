#include "main.h"

/**
 * print_array - prints an array
 * @a: string parameters
 * @n: the number of elements of the array to be printed
 * Return: no return
 **/

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l != (n - 1))
		{
			printf("%d, ", a[l]);
		}
		else
		{
			printf("%d", a[l]);
		}
	}
	printf("\n");
}
