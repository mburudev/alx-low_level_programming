#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string.
 * Return: the string.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return ;
	}
	return (_print_rev_recursion(s + 1));
}
