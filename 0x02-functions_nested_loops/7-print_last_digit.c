#include "main.h"

/**
 * print_last_digit - Check Description
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
	int n;

	n = r % 10;

	if (r < 0)
	n = -n;
	else
	n = n;
	_putchar(n + '0');
	return (n);
}
