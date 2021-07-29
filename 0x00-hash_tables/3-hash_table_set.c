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
	int keylen = 0, vallen = 0, i;
	char *k, *v;
	hash_node_t *n = malloc(sizeof(hash_node_t *));

	while (key[keylen])
		keylen++;
	while (value[vallen])
		vallen++;
	k = malloc(sizeof(char) * (keylen + 1));
	v = malloc(sizeof(char) * (vallen + 1));
	if (k == NULL || v == NULL || n == NULL)
		return (0);
	for (i = 0; i < keylen; i++)
		k[i] = key[i];
	for (i = 0; i < vallen; i++)
		v[i] = value[i];
	hash = hash_djb2((const unsigned char *)k);
	ix = hash % size;
	n->key = k;
	n->value = v;
	if (ht->array[ix])
		n->next = ht->array[ix];
	ht->array[ix] = n;
	return (1);
}
