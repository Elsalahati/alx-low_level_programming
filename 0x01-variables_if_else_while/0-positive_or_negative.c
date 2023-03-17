#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - if else loop
 * description - the starting point of the program
 * Return: (0) if sucess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	return (0);
}
