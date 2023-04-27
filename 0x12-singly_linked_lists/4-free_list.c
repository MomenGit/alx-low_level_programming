#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: the head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
		tmp = head;
	}
}
