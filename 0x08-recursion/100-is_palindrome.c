#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks of a string is a palindrome.
 * @s: pointer to the string.
 * Return: 1 if string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
    int len = strlen(s);
    char *p = s;
    char *q = s + len - 1;

    if (len == 0 || len == 1) {
        return (1);
    }

   while (p < q) {
        if (*p != *q) {
            return (0);
        }
        p++;
        q--;
    }

    return (1);
}
