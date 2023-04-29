#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: the data (n) in head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
