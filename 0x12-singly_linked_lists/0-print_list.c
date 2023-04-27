#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: the head of a list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", i, (h->str != NULL) ? h->str : "(nil)");
		i++;
		h = h->next;
	}

	return (i);
}
