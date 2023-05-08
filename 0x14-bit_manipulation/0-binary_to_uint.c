#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to the binary number
 * Return: 0 is b is NULL or non binary.
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL | b != '0' | b != '1')
	{
		return (0);
	}
}