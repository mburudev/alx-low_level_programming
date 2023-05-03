#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: pointer to the string.
 * Return: 1 if string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (*s != *(s + len - 1))
	{
		return (0);
	}
	s++;
	len -= 2;
	return (is_palindrome(s));
}
