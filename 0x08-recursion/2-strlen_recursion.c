#include "main.h"

/**
 * _strlen_recursion - prints a string length
 * @s: pointer for the string
 * Return: no return
 **/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = 1 +_strlen_recursion(s + 1);
	}
	return (len);
}
