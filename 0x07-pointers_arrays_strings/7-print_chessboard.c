#include "holberton.h"
/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: chessboard matrix array
*/

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[r][c]);
		if (r < 7)
			_putchar('\n');
	}
}
