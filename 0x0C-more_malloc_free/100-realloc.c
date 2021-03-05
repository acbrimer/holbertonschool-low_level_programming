#include <stdlib.h>

/**
 * _memcpy - copies memory from void pointers
 * @dest: destination pointer for copy
 * @src: source pointer for copy
 * @size: size to copy
*/
void _memcpy(void *dest, void *src, unsigned int size)
{
	char *cdest = (char *)dest;
	const char *csrc = (char *)src;

	if ((cdest != NULL) && (csrc != NULL))
	{
		while (size)
		{
			*(cdest++) = *(csrc++);
			size--;
		}
	}
}

/**
 * _realloc - reallocates pointer to new size on heap
 * @ptr: pointer to realloc
 * @old_size: previous size of pointer data
 * @new_size: new size of pointer data
 *
 * Return: void * pointer to reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int s;

	if (new_size == old_size)
		return (ptr);
	nptr = malloc(new_size);
	if (ptr == NULL)
		return (nptr);
	if (nptr == NULL)
		return (NULL);
	s = old_size < new_size ? old_size : new_size;
	_memcpy(nptr, ptr, s);
	free(ptr);

	return (nptr);
}
