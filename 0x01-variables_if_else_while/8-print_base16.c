#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char alphabet;

	for (x = '0'; x <= '9'; x++)
	putchar(x);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
