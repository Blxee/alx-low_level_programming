#include "lists.h"

/**
 * add_node_end - appends a new element at the end of a list
 *
 * @head: pointer to the head of the list
 * @str: value of the new element
 *
 * Return:
 *	address of the new element when successful
 *	NULL elsewise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, **tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	tail = head;
	while (*tail != NULL)
		tail = &(*tail)->next;

	new->n = n;
	new->next = NULL;

	*tail = new;

	return (new);
}
