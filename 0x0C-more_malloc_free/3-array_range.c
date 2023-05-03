#include <stdlib.h>

/**
 * array_range - creates an array of intergers.
 * @min: minimum interger
 * @max: maximum interger
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
