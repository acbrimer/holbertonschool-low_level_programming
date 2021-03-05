#include <stdlib.h>

/**
 * _memcpy - copies memory from void pointers
 * @dest: destination pointer for copy
 * @src: source pointer for copy
 * @size: size to copy
 * @src_size: size of source string
*/
void _memcpy(void *dest, void *src, unsigned int size, unsigned int src_size)
{
	char *cdest = (char *)dest;
	const char *csrc = (char *)src;
	unsigned int i = 0;

	if ((cdest != NULL) && (csrc != NULL))
	{
		while (size && i < src_size)
		{
			*(cdest++) = *(csrc++);
			i++;
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
	if (nptr == NULL && new_size > 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	s = old_size < new_size ? old_size : new_size;
	if (ptr != NULL && new_size > 0)
		_memcpy(nptr, ptr, s, old_size);
	if (ptr != NULL)
		free(ptr);

	return (nptr);
}
