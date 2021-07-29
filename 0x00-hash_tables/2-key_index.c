#include "hash_tables.h"

/**
 * key_index - gets index of string key
 * @key: the key to hash/find index
 * @size: size of the hash table
 *
 * Return: index of key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
