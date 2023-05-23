#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence of any byte in accept in string s
 * @s: The string to be searched
 * @accept: The set of bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*ptr == *s)
				return (s);
			ptr++;
		}

		s++;
	}

	return (NULL);
}
