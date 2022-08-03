#include "search_algos.h"

/**
 * linear_search - returns first index of value in array
 *
 * @array: the array to search
 * @size: size of the array to search
 * @value: value to search in array
 *
 * Return: ix of first value in array or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}