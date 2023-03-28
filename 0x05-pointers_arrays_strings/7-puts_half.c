#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: characters to be printed
 * Return: no return
 **/

void puts_half(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		l++;
	}
	for (l /= 2; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
