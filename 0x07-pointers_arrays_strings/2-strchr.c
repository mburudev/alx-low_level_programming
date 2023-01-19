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
	int i;

	for (i = 0; i < strlen(s); i++)
	{
	if (s[i] == c)
	{
	return (s[i]);
	}
	}
	return (NULL);
}
