#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - ...
 *
 * @size: ...
 * Return: shash_table_t*
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	size_t i;
	shash_table_t *tb;

	tb = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (tb == NULL)
		return (NULL);

	tb->size = size;
	tb->array = (shash_node_t **)calloc(tb->size, sizeof(shash_node_t *));
	if (tb->array == NULL)
	{
		free(tb);
		return (NULL);
	}
	tb->shead = NULL;
	tb->stail = NULL;

	for (i = 0; i < size; i++)
		tb->array[i] = NULL;

	return (tb);
}

/**
 * shash_node_create - Create a hash table node pair
 *
 * @key: Key of the hash table node pair
 * @value: The new value of the hash table node pair
 * Return: pointer new hash table node pair, or NULL on Error
 */
shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = (char *)malloc(sizeof(char) * (strlen(key) + 1));
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->key, key);

	new_node->value = (char *)malloc(sizeof(char) * (strlen(value) + 1));
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->value, value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	return (new_node);
}

/**
 * cmp_nodes - compares shash table sorted doubly linked list nodes
 *
 * @new_node: New node to compare against
 * @tmp_node: Placeholder node
 * Return: shash_node_t*
 */
shash_node_t *cmp_nodes(shash_node_t *new_node, shash_node_t *tmp_node)
{
	while (tmp_node->snext != NULL)
		if (strcmp(new_node->key, tmp_node->key) < 0)
		{
			new_node->snext = tmp_node;
			new_node->sprev = tmp_node->sprev;
			tmp_node->sprev->snext = new_node;
			tmp_node->sprev = new_node;
			break;
		}
		else
			tmp_node = tmp_node->snext;
	return (tmp_node);
}
/**
 * shash_table_sort - Sort the hash table's
 * sorted doubly linked list on insertion
 *
 * @ht: ...
 * @new_node: ...
 */
void shash_table_sort(shash_table_t *ht, shash_node_t *new_node)
{
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		shash_node_t *tmp_node;

		tmp_node = ht->shead;
		tmp_node = cmp_nodes(new_node, tmp_node);
		if (tmp_node->snext == NULL)
		{
			if (strcmp(new_node->key, tmp_node->key) < 0)
			{
				new_node->snext = tmp_node;
				new_node->sprev = tmp_node->sprev;
				tmp_node->sprev->snext = new_node;
				tmp_node->sprev = new_node;
			}
			else
			{
				tmp_node->snext = new_node;
				new_node->sprev = tmp_node;
				ht->stail = new_node;
			}
		}
	}
}

/**
 * shash_table_set - ...
 *
 * @ht: ...
 * @key: ...
 * @value: ...
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node;

	if (key == NULL || ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	/* Checks if it is an operation to update a key-value pair */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			if (current_node->value != NULL)
				free(current_node->value);
			current_node->value = malloc(strlen(value) + 1);
			if (current_node->value == NULL)
				return (0);
			strcpy(current_node->value, value);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = shash_node_create(key, value);
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
	shash_table_sort(ht, new_node);
	return (1);
}

/**
 * shash_table_get - ...
 *
 * @ht: ...
 * @key: ...
 * Return: char*
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	if (node == NULL)
		return (NULL);

	return (node->value);
}

/**
 * shash_table_print - ...
 *
 * @ht: ...
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *bucket;

	if (ht == NULL)
		return;

	node = ht->shead;
	i = 0;
	printf("{");
	while (node != NULL)
	{
		bucket = node;
		while (bucket != NULL)
		{
			i++;
			printf("'%s': '%s', ", bucket->key, bucket->value);
			bucket = bucket->next;
		}
		node = node->snext;
	}
	if (i > 0)
		printf("\b\b");
	printf("}\n");
}

/**
 * shash_table_print_rev - ...
 *
 * @ht: ...
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *bucket;

	if (ht == NULL)
		return;

	node = ht->stail;
	i = 0;
	printf("{");
	while (node != NULL)
	{
		bucket = node;
		while (bucket != NULL)
		{
			i++;
			printf("'%s': '%s', ", bucket->key, bucket->value);
			bucket = bucket->next;
		}
		node = node->sprev;
	}
	if (i > 0)
		printf("\b\b");
	printf("}\n");
}

/**
 * free_shash_node - Frees a hash table node
 *
 * @node: hash table node
 */
void free_shash_node(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * shash_table_delete - ...
 *
 * @ht: ...
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
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
			free_shash_node(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
