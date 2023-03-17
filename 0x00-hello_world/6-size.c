#include <stdio.h>

/**
 * main - printing the sizes of various types on computer
 * Return: (0) if sucess
 */
int main(void)
{
	char c;
	int d;
	long li;
	long long o;
	float f;

	scanf("%c %d %li %lli %f", &c, &d, &li, &o, &f);
	printf("Size of a char: %c bytes\n", &sizeof(char));
	printf("Size of an int: %d bytes\n", &sizeof(int));
	printf("Size of a long int: %li bytes\n", &sizeof(long int));
	printf("Size of a long long int: %lli bytes\n", &sizeof(long long));
	printf("Size of a float: %f bytes\n", &sizeof(float));
	return (0);

}
