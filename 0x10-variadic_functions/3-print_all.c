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
    int printed_arg;
    va_list args;
    va_start(args, format);
    
     ptr = format;
    printed_arg = 0;

    while (*ptr != '\0') {
        switch (*ptr) {
            case 'c':
                c = va_arg(args, int);
                printf("%s%c", printed_arg ? ", " : "", c);
                printed_arg = 1;
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%s%d", printed_arg ? ", " : "", i);
                printed_arg = 1;
                break;
            case 'f':
                d = va_arg(args, double);
                printf("%s%f", printed_arg ? ", " : "", d);
                printed_arg = 1;
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL) {
                    printf("%s(nil)", printed_arg ? ", " : "");
                } else {
                    printf("%s%s", printed_arg ? ", " : "", s);
                }
                printed_arg = 1;
                break;
            default:
                break;
        }
        ptr++;
    }

    va_end(args);
    printf("\n");
}
