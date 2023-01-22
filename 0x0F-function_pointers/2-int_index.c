#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @size: the number of elements in the array array.
 * @array: the array with the intergers.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: index of the first element which cmp doesn't return 0
 * -1 if no element matches and if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
