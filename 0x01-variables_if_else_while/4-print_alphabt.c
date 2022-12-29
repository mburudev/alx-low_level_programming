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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet == 'e' || alphabet == 'q')
	{
		continue;
	}
		putchar(alphabet);
		putchar('\n');
	return (0);
}
