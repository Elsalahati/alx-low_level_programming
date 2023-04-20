#include <stdio.h>
#include <stdlib.h>
#include "CALC_H"

/**
 * op_add - add two numbers
 * @a: first input number
 * @b: second input number
 * Return: the sum of the two numbers
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first input number
 * @b: second input number
 * Return: the difference of the two numbers
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - add two numbers
 * @a: first input number
 * @b: second input number
 * Return: the product of the two numbers
 **/

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - add two numbers
 * @a: first input number
 * @b: second input number
 * Return: the result of division of the two numbers
 **/

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - add two numbers
 * @a: first input number
 * @b: second input number
 * Return: the remainder of the two numbers
 **/

int op_mod(int a, int b)
{
	return ((a) % (b));
}
