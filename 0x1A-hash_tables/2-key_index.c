#include "hash_tables.h"

/**
 * key_index - calculates the index of hash table node from its key
 *
 * @key: the key of a hash node
 * @size: the size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
