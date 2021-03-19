#include "lists.h"

/**
 * list_len - gets the length of a linked list from start node h
 * @h: head node to count from
 *
 * Return: size_t of linked list
*/
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t s;

	for (s = 0; tmp != NULL; s++)
		tmp = tmp->next;

	return (s);
}
