#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base integer.
 * @y: the power.
 * Return: the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (pow(x, y));
}
