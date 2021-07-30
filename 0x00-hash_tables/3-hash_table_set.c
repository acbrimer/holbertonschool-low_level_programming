#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * handle_collision - handles collision in node
 * @n: new node pointer
 * @c: current node pointer
 *
 * Return: new node with collision
 */
hash_node_t *handle_collision(hash_node_t *n, hash_node_t *c)
{
	while (c)
	{
		if (strcmp(c->key, n->key) == 0)
		{
			free(c->value);
			c->value = strdup(n->value);
			free(n);
			return (c);
		}
		c = c->next;
	}
	return (n);
}

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
	hash_node_t *n = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL || n == NULL)
		return (0);
	size = ht->size;
	hash = hash_djb2((const unsigned char *)key);
	ix = hash % size;
	n->key = strdup(key);
	n->value = strdup(value);
	n->next = ht->array[ix];
	if (ht->array[ix])
		ht->array[ix] = handle_collision(n, ht->array[ix]);
	else
		ht->array[ix] = n;
	return (1);
}
