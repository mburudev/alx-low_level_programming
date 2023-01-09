#include <stdio.h>
#include "main.h"

/**
 * *rot13 -check description.
 * Description: Encodes astring using rot13.
 * @s: string to be encoded.
 * Return: Resulting encoded string.
 */

char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; a[j] != '\0'; j++)
	{
	if (s[i] == a[j])
	{
	s[i] = b[j];
	break;
	}
	}
	}
	return (s);
}
