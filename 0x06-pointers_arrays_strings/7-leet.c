#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string into "1337" (leet speak)
 * @str: Pointer to the string
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		i = 0;

		while (leet_chars[i] != '\0')
		{
			if (*ptr == leet_chars[i])
				*ptr = leet_replacements[i];
			i++;
		}
		ptr++;
	}

	return (str);
}
