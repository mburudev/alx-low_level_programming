#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring
 * @haystack: The string to be searched
 * @needle: The substring to search for
 * Return: pointer to the beginning of the substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
