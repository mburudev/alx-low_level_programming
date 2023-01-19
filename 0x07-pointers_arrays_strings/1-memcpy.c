#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memcpy - check description.
 * Description: copies meory areas from src pointer to the dest pointer.
 * @n: number of bytes to be copied.
 * @src: source pointer.
 * @dest: destination pointer.
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	size_t n;

	if (((char *)dest - (char *)src > n) || ((char *)src - (char *)dest > n))
	{
	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	}
	return (dest);
}
