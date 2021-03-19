#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a list of type list_t
 * @h: list_t type header node
*/
void free_list(list_t *head)
{
	list_t *tmp = head, *next;

	while (tmp)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
