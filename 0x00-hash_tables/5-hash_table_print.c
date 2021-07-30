#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_node - prints a node as `key: value`
 * @n: pointer to node to print
 * @isLast: last index with a key
 */
void print_node(const hash_node_t *n, int isLast)
{
	if (n == NULL || n->key == NULL)
		return;
	printf("'%s': '%s'", n->key, n->value);
	if (isLast == 0 || n->next != NULL)
		printf(", ");
	if (n->next != NULL)
		print_node(n->next, isLast);
	return;
}

/**
 * hash_table_print - prints all values in hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, lastIx = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL && ht->array[i]->key != NULL)
			lastIx = i;
	printf("{");
	for (i = 0; i < ht->size; i++)
		print_node(ht->array[i], i == lastIx ? 1 : 0);
	printf("}\n");
}
