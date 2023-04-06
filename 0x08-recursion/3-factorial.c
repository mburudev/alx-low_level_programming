#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of any number.
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
