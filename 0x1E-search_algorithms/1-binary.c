#include "search_algos.h"

/**
 * binary_recursive - called from binary search to recursively find value
 * @array: pointer to first element of sorted array
 * @l: start index
 * @r: end index
 * @value: value to search for
 *
 * Return: index of value in array or -1
 */
int binary_recursive(int *array, unsigned int l, unsigned int r, int value)
{
	unsigned int i = l + 1;
	int m = l + (r - l) / 2;

	if (l > r)
		return (-1);
	printf("Searching in array: %d", array[l]);
	for (; i <= r; i++)
		printf(", %d", array[i]);
	putchar('\n');
	if (array[m] == value)
		return (m);
	if (array[m] < value)
		return (binary_recursive(array, m + 1, r, value));
	return (binary_recursive(array, l, m - 1, value));
}

/**
 * binary_search - binary search for sorted array
 * @array: pointer to first element of sorted array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value in array or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
