#include <stdio.h>
#include <string.h>

/**
 * rot13 - Encode a string using ROT13
 * @str: Pointer to the string
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr != '\0')
	{
		char *found = strchr(alpha, *ptr);
		if (found != NULL)
		{
			i = found - alpha;
			*ptr = rot13[i];
		}
		ptr++;
	}

	return (str);
}
