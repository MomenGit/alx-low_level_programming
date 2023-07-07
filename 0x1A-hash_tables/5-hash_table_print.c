#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Print hash table in the form of Key: Value pair
 *
 * @ht: Pointer to a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *bucket;
	unsigned long int i, j;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0, j = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket != NULL)
		{
			j++;
			printf("'%s': '%s', ", bucket->key, bucket->value);
			bucket = bucket->next;
		}
	}
	if (j > 0)
		printf("\b\b");
	printf("}\n");
}
