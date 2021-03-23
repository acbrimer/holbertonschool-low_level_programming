#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at index
 * @head: head node
 * @idx: idx to add new node
 * @n: int value for new node
 *
 * Return: added node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	for (i = 0; i < idx && current != NULL; i++)
		current = current->next;
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	new->n = n;

	return (new);
}
