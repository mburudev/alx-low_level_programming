#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of command line arguments
 * @av: An array of strings containing the command line arguments
 * Return: A pointer to a new concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, k, length = 0;
	char *str;
	size_t j;

	if (ac == 0 || av == NULL)
	{
		return NULL;
	}

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * length);
	if (str == NULL)
	{
		return NULL;
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
