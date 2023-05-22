#include <stdio.h>
#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	while (n / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = (n / divisor) % 10;
		putchar(digit + '0');
		divisor /= 10;
	}
}
