#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to the binary number
 * Return: 0 is b is NULL or non binary.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, num;

	num = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
