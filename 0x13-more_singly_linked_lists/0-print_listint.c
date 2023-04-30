#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements in a list
 *
 * @h: head (first node) of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
	{
		printf("\n");
		return (0);
	}

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}

