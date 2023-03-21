#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function of the program
 * description - the starting point of the program
 * Return: (0) success
 */

void print_alphabet(void);
int main(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
		putchar('\n');
	}
	return (0);
}
