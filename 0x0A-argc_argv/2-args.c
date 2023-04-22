#include <stdio.h>

/**
 * main - Check Description.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: prints all arguments entered followed by a new line.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
	printf("%s\n", argv[arg]);
	}
	return (0);
}
