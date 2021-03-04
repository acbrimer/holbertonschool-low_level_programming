#include <stdlib.h>

/**
 * array_range - creates an int array from min to max
 * @min: starting int for array
 * @max: last int for array
 *
 * Return: int * pointer to new array
*/
int *array_range(int min, int max)
{
	int s, i, *arr;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	arr = malloc(sizeof(int) * s);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= s; i++, min++)
		arr[i] = min;

	return (arr);
}
