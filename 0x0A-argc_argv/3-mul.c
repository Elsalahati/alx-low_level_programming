#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers and get the result
 * @argc: first argument to be input
 * @argv: Second argument to be input
 * Return: 0 always & 1 otherwise
 **/

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);
}
