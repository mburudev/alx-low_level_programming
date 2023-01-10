#include <stdio.h>
#include "main.h"

/**
 * main - Check Description.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: prints all arguments entered followed by a new line.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
