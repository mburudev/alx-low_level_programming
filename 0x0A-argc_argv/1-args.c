#include <stdio.h>

/**
 * main - check description.
 * @argc: first parameter.
 * @argv: second parameter
 * Description: prints number of arguments
 * Return: 0 for code success
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 1; count < argc; count++)
	{
		*argv[count] = *argv[count];
	}
	printf("%d\n", count);
	return (0);
}
