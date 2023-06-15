#include "lists.h"

/**
 * add_dnodeint - prepentds a new elements at the end of a double linked list
 *
 * @head: the address of head of the list
 * @n: the new element value
 *
 * Return: a pointer to the new node, or NULL in case of failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->prev != NULL)
		(*head) = (*head)->prev;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	(*head)->prev = new;
	*head = (*head)->prev;

	return (new);
}
