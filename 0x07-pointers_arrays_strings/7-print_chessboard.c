#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 * @a: The 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	if (a == NULL)
		return;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c ", a[row][col]);
		}
		printf("\n");
	}
}
