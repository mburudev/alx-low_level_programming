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
	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0' || *(s2 + 1) == '\0')
			return (0);
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	else if (*s2 == *s1)
	{
		if (*s1 == '\0')
			return (1);
		else if (wildcmp(s1 + 1, s2 + 1))
			return (1);
	}
	return (0);
}
