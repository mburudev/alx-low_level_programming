#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet 10 times.
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char at, times;

	times = 0;

	while (times < 10)
	{
	for (at = 'a'; at <= 'z'; at++)
	{
		putchar('alphabet');
	}
	times++;
	putchar('\n');
	}
}
