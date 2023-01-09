#include <stdio.h>
#include "main.h"

/**
 * _strcmp - check description.
 * Description: it compares two strings.
 * @s1: first input character.
 * @s2: second input character.
 * Return: difference in ASCII values.
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0'; ++i)
	{
	if (s1[i] > s2[i])
	{
	diff = s1[i] - s2[i];
	return (diff);
	}
	else if (s1[i] < s2[i])
	{
	diff = s1[i] - s2[i];
	return (diff);
	}
	}
	return (0);
}
