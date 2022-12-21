#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */

void print_diagonal(int n)
{
	int i;
	int spaces;

	for (i = 0; i < n; i++)
	{
	for (spaces = 0; spaces < i; spaces++)
	{
	putchar(' ');
	}
	putchar('\\');
	putchar('\n');
	}
	if (n <= 0)
	{
	putchar('\n');
	}
}
