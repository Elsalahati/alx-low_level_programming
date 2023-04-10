#include <stdio.h>
#include "main.h"

/**
 * main - prints the current name of the file
 * @argc: Arguments counting if needed
 * @argv: General Array of Strings
 * Return: 0 always (success)
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
	{
		printf("%d\n", argc -1);
	}
	return (0);
}
