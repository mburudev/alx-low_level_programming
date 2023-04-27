#include <stdio.h>

/**
 * my_print - prints a string before the main function executes.
 */

void __attribute__((constructor)) my_print(void);

void my_print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
