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
	int len = 0, i = 0;

	/* Compute the length of the string */
	while (s[len] != '\0')
		len++;

	/* Check if the string is a palindrome */
	while (i < len / 2)
	{
		if (s[i] != s[len - i - 1])
			return 0;
		i++;
	}
	return 1;
}

