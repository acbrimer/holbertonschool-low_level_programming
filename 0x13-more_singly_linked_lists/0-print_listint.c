#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a linked list of ints and returns size
 * @h: header node in linked list
 *
 * Return: size_t length of list printed
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}

	return (i);
}
