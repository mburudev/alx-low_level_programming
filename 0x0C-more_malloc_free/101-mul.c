#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	for (i = 0; s[i]; i++)
	{
		if (!_isdigit(s[i]))
		{
			printf("Error\n");
			exit(98);
		}
		num = num * 10 + (s[i] - '0');
	}
	return (sign * num);
}

/**
 * mul - multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: the result of the multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	printf("%d\n", mul(num1, num2));
	return (0);
}
