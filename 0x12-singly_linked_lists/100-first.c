#include <stdio.h>
#include "lists.h"

void SentenceBefore(void) __attribute__((constructor));

/**
 * SentenceBefore - prints a sentence before main function
 * Return: no return
 **/

void SentenceBefore(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
