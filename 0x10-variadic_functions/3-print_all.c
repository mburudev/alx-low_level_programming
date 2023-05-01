#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of arguments assed to the function.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
    char c;
    int i;
    double d;
    char *s;
    const char *ptr;
    va_list args;
    va_start(args, format);
    
    ptr = format;

    while (*ptr != '\0') {
        switch (*ptr) {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                d = va_arg(args, double);
                printf("%f", d);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL) {
                    printf("(nil)");
                } else {
                    printf("%s", s);
                }
                break;
            default:
                break;
        }
        ptr++;
        if (*ptr != '\0') {
            printf(", ");
        }
    }

    va_end(args);
    printf("\n");
}
