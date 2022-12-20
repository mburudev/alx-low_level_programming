#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - check description
 * Description: Prints a string in reverse.
 * @s: the string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
	len++;
	while (len)
	_putchar(s[--len]);
	_putchar('\n');
}
