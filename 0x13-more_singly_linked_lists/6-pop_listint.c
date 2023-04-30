#include "lists.h"

/**
 * pop_listint - removes the last element from a list
 *
 * @head: head (first node) of the list
 *
 * Return:
 *	the removed element if the list is not empty
 *	0 elsewise
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (0);

	value = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;

	return (value);
}

