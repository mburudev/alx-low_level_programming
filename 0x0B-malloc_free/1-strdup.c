#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory.
 * @str: pointer to the string.
 * Return: pointer to the duplicated string if success.
 */

char *_strdup(char *str)
{
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}
	str1 = malloc((strlen(str) + 1) * sizeof(char));
	if (str1 == NULL)
	{
		return (NULL);
	}
	strcpy(str1, str);
	return (str1);
}
