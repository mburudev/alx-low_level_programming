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
	int value;

	if (n > 0)
	{
	value = 1;
	_putchar('+');
	}
	else if (n == 0)
	{
	value = 0;
	_putchar('0');
	}
	else
	{
	value = -1;
	_putchar('-');
	}
	return (value);
}
