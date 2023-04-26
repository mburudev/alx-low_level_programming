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
	else if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 != '\0' && (*s1 == *s2))
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}


