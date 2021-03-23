#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head node
 * @index: index to delete node
 *
 * Return: 1 for success, -1 for fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		next = tmp->next;
		if (index == i + 1)
		{
			tmp->next = next->next;
			free(next);
			return (1);
		}
		i++;
		tmp = next;
	}

	return (-1);
}
