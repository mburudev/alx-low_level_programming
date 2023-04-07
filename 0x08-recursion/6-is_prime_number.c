#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: input integer.
 * Return: 1 if the input integer is a prime number.
 */

int is_prime_number(int n)
{
	int a = n % 2;
	int b = n % 3;
	int c = n % 5;
	int d = n % 7;

	if (n < 1)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (a == 0 && b == 0 && c == 0 && d == 0)
	{
		return (0);
	}
	return (1);
}
