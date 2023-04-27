#include "lists.h"
#include <string.h>

/**
 * add_node - preoends a new element at the start of a list
 *
 * @head: pointer to the head of the list
 * @str: the new element's value
 *
 * Return:
 *	address of the new element when successful
 *	NULL elsewise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
