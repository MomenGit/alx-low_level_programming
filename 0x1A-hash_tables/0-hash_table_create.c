#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 *
 * @size: the size of the new created table
 * Return: pointer to new created table, or NULL On Error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *tb;

	tb = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (tb == NULL)
		return (NULL);

	tb->size = size;
	tb->array = (hash_node_t **)calloc(tb->size, sizeof(hash_node_t *));
	if (tb->array == NULL)
	{
		free(tb);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		tb->array[i] = NULL;

	return (tb);
}
