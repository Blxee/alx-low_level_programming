#include "lists.h"

/**
 * list_len - retrieves the length of a list
 *
 * @h: head (first node) of the list
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
