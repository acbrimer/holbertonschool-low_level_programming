#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_node - prints a node as `key: value`
 * @n: pointer to node to print
 *
 * Return: 1 for printed, 0 for not printed
 */
int print_node(const hash_node_t *n)
{
	if (n == NULL || n->key == NULL)
		return (0);
	printf("'%s': '%s', ", n->key, n->value);
	if (n->next != NULL)
		print_node(n->next);
	return (1);
}

/**
 * hash_table_print - prints all values in hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c = 0;

	printf("{");
	if (ht == NULL)
		return;
	for (i = 1; i < ht->size; i++)
		c += print_node(ht->array[i]);
	printf(c == 0 ? "}\n" : "\b\b}\n");
}
