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
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, **tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	*tail = *head;
	while (*tail != NULL)
		*tail = (*tail)->next;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	*tail = new;

	return (new);

}
