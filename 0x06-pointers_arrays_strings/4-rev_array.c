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
	int i;
	int b;

	i = 0;
	while (i < n)
	{
	n--;
	b = a[i];
	a[i] = a[n];
	a[n] = b;
	i++;
	}
}
