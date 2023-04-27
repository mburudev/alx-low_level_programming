#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of arguments assed to the function.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j = 0;
	char *str;
	char sep = '\0';

	va_start(all, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j++;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			sep = ',';
		i++;
	}

	printf("\n");
	va_end(all);
}
