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
	unsigned long int ix, hash, size = ht->size;

	char *k = malloc(sizeof(char) * strlen(key));
	char *v = malloc(sizeof(char) * strlen(value));
	hash_node_t *n = malloc(sizeof(hash_node_t *));

	if (k == NULL || v == NULL || n == NULL)
		return (0);
	strcpy(k, key);
	strcpy(v, value);
	hash = hash_djb2((const unsigned char *)k);
	ix = hash % size;
	n->key = k;
	n->value = v;
	if (ht->array[ix])
		n->next = ht->array[ix];
	ht->array[ix] = n;
	return (1);
}
