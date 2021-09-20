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
	unsigned int ix;

	if (array == NULL)
		return (-1);
	for (ix = 0; ix < size; ix++)
	{
		printf("Value checked array[%d] = [%d]\n", ix, array[ix]);
		if (array[ix] == value)
			return (ix);
	}
	return (-1);
}
