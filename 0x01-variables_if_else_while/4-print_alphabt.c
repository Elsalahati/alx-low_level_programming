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

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);

	putchar('\n');
	return (0);
}
