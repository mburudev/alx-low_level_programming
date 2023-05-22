#include <stdio.h>
#include "main.h"

/**
 * rot13 - Encode a string using ROT13
 * @str: Pointer to the string
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr != '\0')
	{
		i = 0;
		while (alpha_upper[i] != '\0')
		{
			if (*ptr == alpha_upper[i])
			{
				*ptr = rot13_upper[i];
				break;
			}
			else if (*ptr == alpha_lower[i])
			{
				*ptr = rot13_lower[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
