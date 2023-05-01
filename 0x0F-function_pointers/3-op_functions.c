#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  difference of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two  integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: remainder of a divided by  b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
