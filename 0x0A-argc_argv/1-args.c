#include <stdio.h>
#include <stdlib.h>

/**
 * main - check description.
 * @argc: first parameter.
 * @argv: second parameter
 * Description: prints number of arguments
 * Return: 0 for code success
 */

int main(int argc, char **argv)
{
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
	*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);
}