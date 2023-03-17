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
	int dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;
	if (dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, dig);
	}
	else if (dig == 0)
	{
		printf("Last digit of %d is %d and is 0", n, dig);
	}
	else if (dig < 6 && dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, dig);
	}
	printf("\n");
	return (0);
}
