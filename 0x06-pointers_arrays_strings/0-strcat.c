#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: the pointer to one string.
 * @dest: the pointer to the other string.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';

	return (dest);
}
