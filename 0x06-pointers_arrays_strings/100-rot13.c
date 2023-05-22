#include <stdio.h>

/**
 * rot13 - Encode a string using ROT13
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		j = 0;

		/* Check if the character is an uppercase letter */
		while (alpha_upper[i] != '\0')
		{
			if (*ptr == alpha_upper[i])
			{
				*ptr = rot13_upper[i];
				j = 1;  /* Indicate that an uppercase letter was found */
				break;
			}
			i++;
		}

		/* If an uppercase letter was found, continue to the next character */
		if (j)
		{
			ptr++;
			continue;
		}

		i = 0;

		/* Check if the character is a lowercase letter */
		while (alpha_lower[i] != '\0')
		{
			if (*ptr == alpha_lower[i])
			{
				*ptr = rot13_lower[i];
				break;
			}
			i++;
		}

		ptr++;
	}

	return str;
}
