#include "hash_tables.h"
#include <stdlib.h>

/**
 * delete_node - frees node of type hash_table_t
 * @n: pointer to the node to free
 */
void delete_node(hash_node_t *n)
{
    hash_node_t *tmp = n, *next;

    while (tmp)
    {
        next = tmp->next;
        free(tmp->key);
        free(tmp->value);
        free(tmp->next);
        free(tmp);
        tmp = next;
    }
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
        delete_node(ht->array[i]);
    free(ht->array);
    free(ht);
}