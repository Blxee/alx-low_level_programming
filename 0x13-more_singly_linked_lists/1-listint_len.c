#include "lists.h"

/**
 * listint_len - determines length of a list
 *
 * @h: head (first node) of the list
 *
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}

