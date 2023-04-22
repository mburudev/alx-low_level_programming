#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if no number and 1 if error.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	return (sum);
}
