#include <stdio.h>
#include "main.h"

/**
 * _isalpha - it checks for alphabetic character
 * @c: single letter input
 * Return: 1 if (c) is a letter or 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	return (1);
	else
	return (0);
}
