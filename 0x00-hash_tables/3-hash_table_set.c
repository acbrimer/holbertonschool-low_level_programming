#include "hash_tables.h"
#include <stdlib.h>

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
    unsigned long int ix, size = 0;

    hash_node_t *n = malloc(sizeof(hash_node_t *));

    if (n == NULL)
        return (0);
    while (ht->array[size])
        size++;
    size++;
    ix = hash_djb2((const unsigned char *)key) % size;
    n->key = (char *)key;
    n->value = (char *)value;
    if (ht->array[ix] != NULL)
        n->next = ht->array[ix];
    ht->array[ix] = n;
    return (1);
}