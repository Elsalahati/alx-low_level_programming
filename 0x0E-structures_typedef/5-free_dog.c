#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: input
 * Return: no return
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
		{
			free(d->name);
		}
		if ((*d).owner)
		{
			free((*d).owner);
		}
		free(d);
	}
}
