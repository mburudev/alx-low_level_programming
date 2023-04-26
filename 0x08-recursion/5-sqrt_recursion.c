#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the square
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
	for (i = 1; i * i < n; i++)
	if (i * i == n)
	{
	return (i);
	}
	else
	{
	return (-1);
	}
	}
}
