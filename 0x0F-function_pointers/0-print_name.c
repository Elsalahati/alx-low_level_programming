#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: a given input name
 * @f: pointer function pointing to the print name function
 * Return: no return
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f)
	{
		(*f)(name);
	}
}
