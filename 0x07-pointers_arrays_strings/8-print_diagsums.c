#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals in square matrix
 * @a: pointer to start of int[][]
 * @size: size of square
*/

void print_diagsums(int *a, int size)
{
	int r, c, dl = 0, dr = 0;

	for (r = 0; r < size; r++)
		for (c = 0; c < size; c++)
		{
			if (c == r)
				dl += *(a + (r * size) + c);
			if ((size - 1 - c) == r)
				dr += *(a + (r * size) + c);
		}
	printf("%d, %d\n", dl, dr);
}
