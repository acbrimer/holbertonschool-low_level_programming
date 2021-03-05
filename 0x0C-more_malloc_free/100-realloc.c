#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates pointer to new size on heap
 * @ptr: pointer to realloc
 * @old_size: previous size of pointer data
 * @new_size: new size of pointer data
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int s;

	if (new_size == old_size)
		return (ptr);
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	s = old_size < new_size ? old_size : new_size;
	memcpy(nptr, ptr, s);
	free(ptr);

	return (nptr);
}
