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
	unsigned int i = 1;

	if (new == NULL)
		return (NULL);
	while (i < idx)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
		i++;
	}
	new->n = n;
	if (current == NULL)
	{
		if (*head == NULL)
			*head = new;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
