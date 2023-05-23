#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer that will store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in the buffer
 */
void print_buffer(char *b, int size) {
	int i, j;
  if (size <= 0) {
    printf("\n");
    return;
  }

  for (i = 0; i < size; i += 10) {
    printf("%08x ", i);
    for ( j = i; j < i + 10 && j < size; j++) {
      printf("%02x ", b[j]);
      if (isprint(b[j])) {
        printf("%c", b[j]);
      } else {
        printf(".");
      }
    }
    printf("\n");
  }
}

