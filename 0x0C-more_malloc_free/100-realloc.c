#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory location
 * @old_size: size of ptr
 * @new_size: size for new memory block
 * Return: a pointer to newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr = NULL;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			return (new_ptr);
		}
	} else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < old_size; i++)
			{
				*((char *)new_ptr + i) = *((char *)ptr + i);
			}
			free(ptr);
			return (new_ptr);
		}
	}
}
