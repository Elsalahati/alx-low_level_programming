#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_alphabet - print the alphabet in lower case
 * description - the starting point of the program
 * Return: (0) success
 */

void print_alphabet(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
		putchar('\n');
	}
	return (0);
}
