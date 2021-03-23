#include "lists.h"

/**
 * pop_listint - remove and return first node of linked list
 * @head: head node
 *
 * Return: value of removed node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	if (tmp->next == NULL)
	{
		head = NULL;
		return (tmp->n);
	}
	*head = tmp->next;

	return (tmp->n);
}
