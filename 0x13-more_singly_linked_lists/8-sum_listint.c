#include "lists.h"

/**
 * sum_listint - returns the sum of values in a listint_t linked list
 * @head: the head node of the linked list
 *
 * Return: int sum of node values
*/
int sum_listint(listint_t *head)
{
	int sum = 0, n;
	listint_t *tmp = malloc(sizeof(listint_t));

	tmp = head;
	while (tmp)
	{
		n = tmp->n;
		sum += n;
		tmp = tmp->next;
	}
	free(tmp);

	return (sum);
}
