#include "lists.h"

/**
 * get_nodeint_at_index - gets node at index from linked list
 * @head: header node
 * @index: index of node to return
 *
 * Return: listint_t node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; i <= index && tmp != NULL; i++)
		tmp = tmp->next;

	return (i < index ? NULL : tmp);
}
