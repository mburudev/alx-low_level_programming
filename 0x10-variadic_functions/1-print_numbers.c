#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: numbmer of intergers to be passed to the function.
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int num;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(numbers);
}
