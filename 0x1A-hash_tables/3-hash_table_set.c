#include "hash_tables.h"
#include <string.h>

/**
 * create_hash_node - Create a hash table node pair
 *
 * @key: Key of the hash table node pair
 * @value: The new value of the hash table node pair
 * Return: pointer new hash table node pair, or NULL on Error
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = (char *)malloc(sizeof(char) * (strlen(key) + 1));
	new_node->value = (char *)malloc(sizeof(char) * (strlen(value) + 1));
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	if (new_node->value == NULL || new_node->key == NULL)
		return (NULL);

	return (new_node);
}

/**
 * hash_table_set - Set a key-value pair of a hash table
 *
 * @ht: Pointer to a hash table
 * @key: Key of the hash table node pair
 * @value: The new value of the hash table node pair
 * Return: 1 On Success, 0 On Error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		if (!strcmp(ht->array[index]->key, key))
		{
			free(ht->array[index]->value);
			ht->array[index]->value = malloc(strlen(value) + 1);
			if (ht->array[index]->value == NULL)
				return (0);
			strcpy(ht->array[index]->value, value);
			return (1);
		}
	}

	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
