#include "function_pointers.h"

/**
 * print_name - it prints a name.
 * @name: the name of the person.
 * @f: a function pointer.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
