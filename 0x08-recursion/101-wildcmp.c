#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string.
 * Return: 1 if the strings are considered identical and 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	return (0);
}
