#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings but uses n bytes from src string
 * @src: pointer to the src string
 * @dest: the pointer the dest string
 * @n: maximum number of bytes for src string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	*temp = '\0';
	return (dest);
}
