#include <stdio.h>
#include "main.h"

/**
 * main - prints the current name of the file
 * @argc: Arguments counting if needed
 * @argv: General Array of Strings
 * Return: 0 always (success)
 **/

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		{
			printf("%s\n", argv[k]);
		}
	return (0);
}
