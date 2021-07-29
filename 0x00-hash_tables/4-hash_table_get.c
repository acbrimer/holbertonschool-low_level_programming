#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - gets the value at key for hash table
 * @ht: pointer to hash table
 * @key: key to retreive from hash table
 *
 * Return: value at key in hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ix;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	ix = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[ix] == NULL)
		return (NULL);
	if (ht->array[ix]->next == NULL && strcmp(ht->array[ix]->key, key) == 0)
		return (ht->array[ix]->value);
	node = malloc(sizeof(hash_node_t));
	node = memcpy(node, ht->array[ix]->next, sizeof(hash_node_t));
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	free(node);

	return (NULL);
}
