#include <stdio.h>
#include <stdlib.h>
#include "CALC_H"

/**
 * get_op_func - returns pointer to the correct operation
 * @s: pointer function pointing to operations
 * Return: pointer to the correct operation, NULL otherwise 
 **/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s == "+" || s == "-" || s == "*" || s == "/" || s == "%")
		{
			return (s());
			s++;
		}
	}
}
