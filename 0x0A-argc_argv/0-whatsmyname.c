#include <stdio.h>
#include "main.h"

/**
 * main - prints the current name of the file
 * @argc: Arguments counting if needed
 * @argv: General Array of Strings
 * Return: 0 always (success)
 **/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
