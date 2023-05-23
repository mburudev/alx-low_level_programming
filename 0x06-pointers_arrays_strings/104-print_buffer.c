#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer that will store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
  int i, j, carry = 0;
  int len1 = strlen(n1);
  int len2 = strlen(n2);

  
  if (len1 + len2 > size_r) {
    return 0;
  }

  
  for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) {
    int sum = (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0) + carry;
    r[i + j + 1] = sum % 10 + '0';
    carry = sum / 10;
  }

  
  if (carry) {
    r[0] = carry + '0';
  }

  return r;
}
