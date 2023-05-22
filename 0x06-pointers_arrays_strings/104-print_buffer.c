#include "main.h"
#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
	int i;
	int j;

    if (size <= 0) {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10) {
      
        printf("%08x  ", i);

     
        for (j = i; j < i + 10; j++) {
            if (j < size) {
                unsigned char byte = (unsigned char)b[j];
                printf("%02x ", byte);
                if (isprint(byte))
                    printf("%c", byte);
                else
                    printf(".");
            } else {
                printf("   "); 
            }
        }

        printf("\n");
    }
}
