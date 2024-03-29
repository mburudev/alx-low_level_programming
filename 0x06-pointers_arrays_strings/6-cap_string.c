#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: Pointer to the string
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
		    *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
		    *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
		    *ptr == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}
		ptr++;
	}

	return (str);
}
