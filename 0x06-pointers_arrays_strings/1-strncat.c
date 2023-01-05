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
	size_t i, j;
	int a = strlen(src);

	for (i = 0; dest[i] != '\0'; i++)
	{
	;
	}
	for (j = 0; j < n; j++)
	{
	dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
