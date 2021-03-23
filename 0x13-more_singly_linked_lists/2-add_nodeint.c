#include "lists.h"

/**
 * add_nodeint - adds a node of listint_t to head of linked list
 * @head: current head node
 * @n: value for new node
 *
 * Return: listint_t new node or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
