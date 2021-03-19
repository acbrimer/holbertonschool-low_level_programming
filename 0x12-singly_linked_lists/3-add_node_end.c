#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to the end of a linked list
 * @head: head node of linked list
 * @str: string data for new node
 *
 * Return: pointer to added node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	unsigned int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	while (current != NULL && current->next != NULL)
		current = current->next;
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
		current->next = new;

	return (new);
}
