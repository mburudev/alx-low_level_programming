#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: pointer to the string.
 * Return: 1 if string is a palindrome and 0 if not.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 * @len: length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (check_palindrome(s, len));
}
