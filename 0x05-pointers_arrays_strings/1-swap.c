#include <stdio.h>
#include "main.h"

/**
 * swap_int - check description
 * Description : It swaps the values of 2 integers
 * @a: pointer with the address value
 * @b: pointer with the address value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
