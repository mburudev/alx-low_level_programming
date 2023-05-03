#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: a pointer to resulting string and NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len;
	size_t s2_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	result = malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
