#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function of the program
 * description - the starting point of the program
 * Return: (0) success
 **/
int main(void)
{
	int i;
	int p;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
