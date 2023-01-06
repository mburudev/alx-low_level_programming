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
	int left, right,  tmp;

	left = 0;
	right = n - 1;
	
	while (left < right)
	{
	tmp = a[left];
	a[left] = a[right];
	a[right] = tmp;
	left++;
	right--;
	}
}
