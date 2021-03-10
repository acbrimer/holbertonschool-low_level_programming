#include <stdlib.h>

/**
 * int_index - returns position of matching int
 * @array: array to search
 * @size: size of array
 * @cmp: function to compare and find match
 *
 * Return: index of found match or -1 if not exits
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);

	return (-1);
}
