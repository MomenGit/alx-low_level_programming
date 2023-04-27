#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: the head of the list
 * @str: the new added string
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; new->str[i] != '\0'; i++)
		;

	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
