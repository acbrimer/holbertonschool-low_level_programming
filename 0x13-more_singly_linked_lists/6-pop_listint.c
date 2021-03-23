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
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	if (tmp->next == NULL)
	{
		head = NULL;
		n = tmp->n;
		free(tmp);
		return (n);
	}
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
