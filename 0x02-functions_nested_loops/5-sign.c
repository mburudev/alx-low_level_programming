#include <stdio.h>
#include "main.h"

/**
 * print_sign - check description
 * Description - it prints the sign of a number.
 * @n: number input
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	fprintf(stderr, '+');
	return (1);
	}
	else if (n == 0)
	{
	putchar('0');
	return (0);
	}
	else
	{
	putchar('-');
	return (-1);
	}
}
