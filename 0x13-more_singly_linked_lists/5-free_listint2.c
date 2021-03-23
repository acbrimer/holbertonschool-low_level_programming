#include "lists.h"

/**
 * free_listint2 - frees all nodes of listint_t list
 * @head: list of head node to free
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *next;

	if (head)
	{
		tmp = *head;
		while (tmp)
		{
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
		*head = NULL;
	}
}
