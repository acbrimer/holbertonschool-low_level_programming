#include "holberton.h"

/**
 * reverse_array - reverses int array at pointer
 * @a: pointer to array
 * @n: length of array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, d, t;

	for (d = n - 1, i = 0; d > (n - 1) / 2; d--, i++)
	{
		t = a[i];
		a[i] = a[d];
		a[d] = t;
	}
}
