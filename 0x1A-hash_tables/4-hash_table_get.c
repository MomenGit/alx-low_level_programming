#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: Pointer to a hash table
 * @key: Key of the hash table node pair
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	if (node == NULL)
		return (NULL);
	return (node->value);
}
