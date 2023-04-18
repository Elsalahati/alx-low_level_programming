#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes a variable of type dog
 * @d: type dog
 * @name: of the dog
 * @age: its age
 * @owner: its owner
 * Return: no return
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
