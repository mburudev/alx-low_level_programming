#include <stdio.h>
#include "main.h"

/**
 * factorial(int n) - returns the factorial of any number.
 * factorial - gives the factorial of a positive integer.
 * @n: the given number
 * Return: the factorial of the number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
