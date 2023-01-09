#include <stdio.h>
#include "main.h"

/**
 * _strncat - check description
 * Description: it concatenates two strings but uses n bytes fro src string
 * @src: the pointer for the string
 * @dest: the pointer for the string
 * @n: maximum number of bytes for src string
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
