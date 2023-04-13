#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate everything
 * @ac: two-dimensional array pointer
 * @av: string two
 * Return: 0 always
 **/

char *argstostr(int ac, char **av)
{
	char *p;

	p = argstostr(ac, av);
	if (p == NULL)
	{
		return ("Done");
	}
	printf ("%s", p);
	free(p);
	return (0);
}
