#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 * Return: 0 on success, 1 if wrong number of arguments, 2 if negative bytes
 */
int main(int argc, char *argv[])
{
	unsigned char *opcodes;
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcodes = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
