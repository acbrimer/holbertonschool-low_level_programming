#include "lists.h"

/**
 * listint_len - gets the number of elements in a linked list
 * @h: header node in linked list
 *
 * Return: size_t elements in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *tmp = h;

	for (i = 0; tmp != NULL; i++)
		tmp = tmp->next;

	return (i);
}
