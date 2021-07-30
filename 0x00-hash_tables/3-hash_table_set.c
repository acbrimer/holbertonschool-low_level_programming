#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned long int ix, hash, size;
	hash_node_t *tmp, *next, *n = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL || n == NULL)
		return (0);
	size = ht->size;
	hash = hash_djb2((const unsigned char *)key);
	ix = hash % size;

	n->key = strdup(key);
	n->value = strdup(value);
	n->next = ht->array[ix];
	tmp = ht->array[ix];
	while (tmp)
	{
		next = tmp->next;
		if (strcmp(tmp->key, key) == 0)
		{
			n->next = tmp->next;
			free(tmp);
		}
		tmp = next;
	}
	ht->array[ix] = n;
	return (1);
}
