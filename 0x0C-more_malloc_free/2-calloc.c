#include <stdlib.h>

/**
 * _calloc - allocates array of elements of size
 * @nmemb: number of array elements
 * @size: size of array elements
 *
 * Return: void * pointer to new allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb * size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = '\0';

	return (p);
}
