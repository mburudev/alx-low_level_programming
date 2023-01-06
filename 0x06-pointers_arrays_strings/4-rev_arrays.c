#include <stdio.h>
#include "main.h"

/**
 * reverse_array -check description
 * Description: Reverse the content of an array of intergers.
 * @a: array to be reversed.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (int i = 0; i < n / 2; i++)
	{
	int tmp = a[i];

	a[i] = a[n - i - 1];
	a[n - i - 1] = tmp;
	}
}

