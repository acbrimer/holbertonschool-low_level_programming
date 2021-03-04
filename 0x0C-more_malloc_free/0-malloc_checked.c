#include <stdlib.h>

/**
 * malloc_checked - allocates b spaces in memory
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p = (void *)malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
