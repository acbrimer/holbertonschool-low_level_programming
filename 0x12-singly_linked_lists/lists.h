#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>

int _putchar(char c);

/**
 * struct list_t - a node for a singly linked list
 * @str: string data within the node
 * @len: size_t of str
 * @next: pointer to next list_t node or NULL for last node
*/
typedef struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
