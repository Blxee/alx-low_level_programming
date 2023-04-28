#include "lists.h"

/**
 * add_nodeint - prepends an element at the start of the list
 *
 * @head: pointer to the head (first node) of the list
 * @n: the value to add
 *
 * Return:
 *	a pointer to the new node on success
 *	NULL elsewise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);

}

