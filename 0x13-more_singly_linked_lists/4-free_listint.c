#include "lists.h"

/**
 * free_listint - frees all nodes of linked list
 * @head: head node of linked list to free
*/
void free_listint(listint_t *head)
{
	listint_t *tmp = head, *next;

	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
