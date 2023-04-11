#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - Adds positive numbers only and get result
 * @argc: first argument to be input
 * @argv: Second argument to be input
 * Return: 0 always & 1 otherwise
 **/

int main(int argc, char *argv[])
{
	unsigned int p;
	int k;
	int addition = 0;
	char *link;

	if (argc >= 2)
	{
		for (k = 1; k < argc; k++)
		{
			link = argv[k];

			for (p = 0; p < strlen(link); p++)
			{
				if (link[p] < '0' || link[p] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			addition = addition + atoi(link);
		}
		printf("%d\n", addition);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
