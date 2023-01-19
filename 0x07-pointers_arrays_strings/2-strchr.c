#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - check description
 * Description: locates a character in a string.
 * @s: pointer to the string.
 * @c: character to be matched.
 * Return: pointer to the first occurence of or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (c == *s)
	{
	return (s);
	}
	s++;
	}
	if (!c)
	{
	return (s);
	}
	return (NULL);
}
