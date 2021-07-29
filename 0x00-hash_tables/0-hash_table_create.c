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
	unsigned long int i;

	if (size < 1 || t == NULL)
		return (NULL);

	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
	{
		t->array[i] = malloc(sizeof(hash_node_t));
		(t->array[i])->key = NULL;
		(t->array[i])->value = NULL;
	}

	return (t);
}
