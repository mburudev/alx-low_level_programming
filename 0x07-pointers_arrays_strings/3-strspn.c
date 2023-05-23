#include <stdio.h>
#include <string.h>

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial s
 * segment which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && strchr(accept, s[i]) != NULL)
	{
		i++;
	}
	return (i);
}
