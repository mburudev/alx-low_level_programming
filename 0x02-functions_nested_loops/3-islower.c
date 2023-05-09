#include <stdio.h>
#include "main.h"

/**
 * _islower - it checks for a lowercase character.
 * @c: single letter input
 * Return: 1 (c) otherwise nothing.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
