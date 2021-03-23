#include "lists.h"

/**
 * reverse_listint - reverses a linked list of type listint_t
 * @head: the head node of the linked list
 *
 * Return: new head node in reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
