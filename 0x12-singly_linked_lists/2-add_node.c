#include "lists.h"
#include <string.h>

/**
 * add_node - addes node with str value to beginning of linked list
 * @head: existing linked list
 * @str: string value for new node in list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = head[0];

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = tmp;
	head[0] = new;

	return (new);
}
