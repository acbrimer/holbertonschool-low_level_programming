#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t s;
	
	for (s = 0; tmp != NULL; s++)
		tmp = tmp->next;

	return (s);
}
