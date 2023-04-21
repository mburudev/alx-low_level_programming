#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters.
 * @n: interger to be summed.
 * Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(params, n);

	for (int i = 0; i < n; i++)
	{
		sum += va_arg(params, int);
	}

	va_end(params);

	return (sum);
}
