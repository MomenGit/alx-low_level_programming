#include "hash_tables.h"

/**
 * free_hash_node - Frees a hash table node
 *
 * @node: hash table node
 */
void free_hash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - ...
 *
 * @ht: ...
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free_hash_node(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
