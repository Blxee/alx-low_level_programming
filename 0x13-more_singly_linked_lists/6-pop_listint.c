#include "lists.h"

/**
 * pop_listint - removes the last element from a list
 *
 * @head: head (first node) of the list
 *
 * Return: the removed element
 */
int pop_listint(listint_t **head)
{
	listint_t **tail;
	int value;

	if (*tail == NULL)
		return (0);

	tail = head;
	while ((*tail)->next != NULL)
		tail = &(*tail)->next;

	value = (*tail)->n;
	free(*tail);

	return (value);
}

