#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	putchar('\n');
}
