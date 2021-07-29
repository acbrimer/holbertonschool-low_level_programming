#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: side of table
 *
 * Return: hash_table_t pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = malloc(sizeof(hash_table_t));

	if (size < 1 || t == NULL)
		return (NULL);

	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);

	return (t);
}
