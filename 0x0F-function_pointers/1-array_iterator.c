#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: pointer to an array of intergers.
 * @size: the size of the array.
 * @action: function pointer.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
