#include <stdio.h>
#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int i, j;
	char str[10];

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = 0; n > 0; i++)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	str[i] = '\0'; 
	for (j = i - 1; j >= 0; j--)
	{
		putchar(str[j]);
	}
}

