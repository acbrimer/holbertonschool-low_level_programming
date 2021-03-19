#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list of type list_t
 * @h: list_t type header node
 *
 * Return: size_t of linked list elements
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp = h;

	while (tmp)
	{
		printf("[%d] %s\n", (int)tmp->len, tmp->str ? tmp->str : "(nil)");
		i++;
		tmp = tmp->next;
	}

	return (i);
}
