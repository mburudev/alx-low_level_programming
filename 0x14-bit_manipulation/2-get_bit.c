#include <stdio.h>

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit = n & mask;
	return ((bit != 0) ? 1 : 0);
}

