#include "main.h"

/**
 * puts2 - prints every other character
 * @str: characters to be printed
 * Return: no return
 **/

void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (p % 2 == 0)
		_putchar(str[p]);
	}
	_putchar('\n');
}
