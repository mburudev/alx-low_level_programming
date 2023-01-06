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
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[j];
	a[j--] = tmp;
	}
