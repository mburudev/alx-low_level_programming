#include <stdio.h>
#include "main.h"

/**
 * int_islower(int c) -Check description
 * @c: single letter input
 * Description: It checks for a lowercase character.
 * Return: 1 (c) otherwise nothing.
 */

_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
