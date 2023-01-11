#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point.
 * @argc: number of command line arguments.
 * @argv: an arrays of the command line arguments.
 * Return: 0 if no number is entered, error if the number contains symbols
 * and the result if the numbers are valid.
 */

int main(int argc, char *argv[])
{
	int i, n;

	n = 0;

	for (i = 0; i < argc; i++)
	{
	if (i > 0)
	{
	if (atoi(argv[i]) == 0)
	{
	return (printf("Error\n"), 1);
	}
	n += atoi(argv[i]);
	}
	}
	printf("%d\n", n);
	return (0);
}
