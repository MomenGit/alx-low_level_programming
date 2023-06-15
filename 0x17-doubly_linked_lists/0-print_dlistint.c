#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint
 *
 * @h: head of dlistint
 * Return: size_t length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
