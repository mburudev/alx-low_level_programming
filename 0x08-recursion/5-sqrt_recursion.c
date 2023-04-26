#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the square
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (_sqrt_recursion((n + 1) * (n + 1)));
}
