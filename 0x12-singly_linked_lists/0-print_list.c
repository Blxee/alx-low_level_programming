#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements in a list
 *
 * @h: head (first node) of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; ; i++)
	{
		if (h->str)
			printf("[%u]: %s\n", h->len, h->str);
		else
			printf("[0]: (nil)");
		if (h->next != NULL)
			h = h->next;
		else
			break;
	}

	return (i);
}
