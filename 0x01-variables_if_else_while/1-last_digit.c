#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function of the program
 * description - the starting point of the program
 * Return: (0) success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d Last digit of", n);
	}
	else if (n == 0)
	{
		printf("%d Last digit of", n);
	}
	else if (n < 6 && n != 0)
	{
	printf("%d Last digit of", n);
	}
	printf("\n");
	return (0);
}
