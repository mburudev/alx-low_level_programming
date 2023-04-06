#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory area.
 * @n: number of bytes to be filled.
 * @b: the constant to be filled.
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
