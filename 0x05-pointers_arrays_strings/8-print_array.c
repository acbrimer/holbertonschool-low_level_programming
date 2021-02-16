#include <stdio.h>
/**
 * print_array - prints first n ints of array
 * @a: pointer to array start
 * @n: number of array items to print
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	printf("%d", *a);
	for (i = 1; i < n; i++)
		printf(", %d", *(a + i));
	putchar('\n');
}
