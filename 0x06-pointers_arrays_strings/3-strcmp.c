#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return:
 *   0 if the strings are equal
 *   -ve value if the first differing character has a lower ASCII value in s1
 *   +ve value if the first differing character has a greater ASCII value in s1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
