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
	char alphabet = 'a';
	do {
	    putchar (alphabet);
    	    putchar ('\n');
    	    alphabet ++;
 	}while (alphabet <= 'z');
	return (0);
}
