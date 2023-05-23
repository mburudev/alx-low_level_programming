#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The square matrix as a 1D array
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	if (a == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}