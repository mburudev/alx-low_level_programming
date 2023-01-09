#include <stdio.h>
#include "main.h"

/**
 * _strncpy -check description
 * Description: it copies a string
 * @src: source string.
 * @dest: destination string.
 * @n: number of bytes to be copied.
 * Return: A pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
