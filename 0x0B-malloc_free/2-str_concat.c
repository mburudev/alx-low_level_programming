#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to newly concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s3 = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}
