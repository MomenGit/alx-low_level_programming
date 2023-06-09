#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: the head of the list
 * @str: the new added string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	i = 0;
	if (str != NULL)
	{
		new_node->str = strdup(str);
		while (new_node->str[i] != '\0')
			i++;
	}
	else
		new_node->str = NULL;

	new_node->next = NULL;
	new_node->len = i;

	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
	}
	else
		*head = new_node;

	return (*head);
}
