#include "search_algos.h"

/**
 * linear_search - searches for int value in array
 * @array: pointer to array to search
 * @size: size of array
 * @value: value to search in array
 *
 * Return: index of value in array or -1
*/
int linear_search(int *array, size_t size, int value)
{
	int ix = 0;

	if (array == NULL)
		return (-1);
	while (array[ix])
	{
		if (array[ix] == value)
			return (ix);
		ix++;
	}
	return (-1);
}
