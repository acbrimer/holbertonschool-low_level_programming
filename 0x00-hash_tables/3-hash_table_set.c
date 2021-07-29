#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - sets key in hash table
 * @ht: pointer to hash table
 * @key: key to set
 * @value: value to set at key
 *
 * Return: 1 for success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ix, hash, size = ht->size;
	hash_node_t *n = malloc(sizeof(hash_node_t *));

	if (n == NULL)
		return (0);
	hash = hash_djb2((const unsigned char *)key);
	ix = hash % size;
	n->key = (char *)key;
	n->value = (char *)value;
	if (ht->array[ix]->value)
		n->next = ht->array[ix];
	ht->array[ix] = n;
	return (1);
}
