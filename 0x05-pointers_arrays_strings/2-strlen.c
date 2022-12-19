#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen(char *s) - check description
 * Description: Returns the length of a string.
 * strlen - returns the length of the string.
 * @s: pointer for the string
 * Return: 0
 */

int _strlen(char *s)
{
	int l;

	l = strlen(*s);
	return (l);
}
