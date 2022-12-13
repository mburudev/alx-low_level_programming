#include <stdio.h>                                                                 
#include <stdlib.h>                                                              
#include <time.h>                                                                  

/**                                                                                 * main - Entry point                                                      
 *
 * Return: Always 0 (Success)                                                      
 *
 */

int main(void)                                                                     
{

	int digit1, digit2;
	for (digit1 = 0; digit2 <= 98; digit1++)
	{
	putchar((digit1 / 10) + '0');
	putchar((digit1 % 10) + '0');
	puchar(' ');
	putchar((digit2 / 10) + '0');
	putchar((digit2 % 10) + '0');
	if (digit1 == 98 && digit == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
