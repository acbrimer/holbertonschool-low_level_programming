#include <stdlib.h>

/**
 * create_array - creates an array of size = size filled with char c
 * @size: size of array
 * @c: char to fill
 *
 * Return: new char* pointer to array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *r = (char *)malloc(size);

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		r[i] = c;
	r[size] = '\0';

	return (r);
}
