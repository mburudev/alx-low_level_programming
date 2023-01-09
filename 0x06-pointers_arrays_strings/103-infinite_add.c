#include <stdio.h>
#include "main.h"

/**
 * *infinite_add - Check description.
 * Description: It adds two numbers.
 * @n1: input number.
 * @n2: input number.
 * @r: the storage buffer.
 * @size_r: the buffer size.
 * Return: A pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = strlen(n1);
	int l2 = strlen(n2);
	int maxlen = (l1 > l2) ? l1 : l2;
	int carry = 0;

	if (maxlen + 1 > size_r)
	return (0);
	memset(r, '\0', size_r);
	for (int i = 0; i < maxlen; i++)
	{
	int d1 = (i < l1) ? n1[l1 - i - 1] - '0' : 0;
	int d2 = (i < l2) ? n2[l2 - i - 1] - '0' : 0;
	int sum = d1 + d2 + carry;

	r[maxlen - i - 1] = (sum % 10) + '0';
	carry = sum / 10;
	}
	if (carry > 0)
	{
	if (maxlen + 1 > size_r)
	return (0);
	r[0] = carry + '0';
	}
	return (r);
}
