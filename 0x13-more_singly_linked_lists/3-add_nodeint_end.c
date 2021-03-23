#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of linked list
 * @head: current head of linked list
 * @n: int value for new node
 *
 * Return: new node or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	while (current != NULL && current->next != NULL)
		current = current->next;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
		current->next = new;

	return (new);
}
