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
		return (s);
	}else if (*s != '\0')&&(*(s + 1) == '\0')
	{
		return (s);
	}else
	{
		return (1 + _print_rev_recursion(s + 1));
	}
}
