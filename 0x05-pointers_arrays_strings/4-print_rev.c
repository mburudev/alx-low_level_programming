#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - check description
 * Description: Prints a string in reverse.
 * @s - the string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	for (i = 0; i < len / 2; i++)
	{
	char temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
	printf("%s\n", s);
}
