#include <stdlib.h>
/**
 * array_iterator - executes function for each element of array
 * @array: array of ints to pass as input to function
 * @size: size of array
 * @action: function to execute
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
