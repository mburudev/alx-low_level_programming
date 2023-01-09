#include <stdio.h>
#include "main.h"

/**
 * _strcat - Check Description
 * Description : This funxtion concatenates two strings.
 * @src: the pointer for the string.
 * @dest: the pointer for the string.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	size_t i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
