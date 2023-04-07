#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: input integer.
 * Return: 1 if the input integer is a prime number.
 */

int is_prime_number(int n)
{
	a = n % 2;
	b = n % 3;
	c = n % 5;
	d = n % 7;

	if (a != 0) && (b != 0) && (c != 0) && (d != 0)
	{
		return (1);
	}
}
