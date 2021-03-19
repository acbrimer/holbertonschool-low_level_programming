#include "lists.h"
#include <string.h>

/**
 * add_node - addes node with str value to beginning of linked list
 * @head: existing linked list
 * @str: string value for new node in list
 *
 * Return: address of added list element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;

	
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
