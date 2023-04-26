#include <stdio.h>
#include "main.h"

/**
 * free_dog - frees dogs.
 * @d: pointer to struct dog.
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d == NULL)
		{
			return;
		}
		free(d->name);
		free(d->age);
		free(d->owner);
	}
