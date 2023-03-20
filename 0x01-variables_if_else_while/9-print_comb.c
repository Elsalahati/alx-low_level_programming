#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function of the program
 * description - the starting point of the program
 * Return: (0) success
 */

int main(void)
{
	int count = 0;

	while (count <= 99)
	{
		putchar((count / 10) + '0');
		putchar((count % 10) + '0');
		putchar(',');
		putchar(' ');
		count++;
	}
	return (0);
}

