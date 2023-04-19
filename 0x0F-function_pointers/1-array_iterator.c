#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function pointed to by (action)
 * @array: input array
 * @size: size of the array
 * @action: pointer pointing to an input function
 * Return: no return
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array != NULL || action != NULL)
	{
		for (k = 0; k < size; k++)
		{
			action(array[k]);
		}
	}
	else
	{
		return;
	}
}
