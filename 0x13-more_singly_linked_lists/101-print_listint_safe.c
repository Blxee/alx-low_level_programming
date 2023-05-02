#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints all elements in a list
 *
 * @head: first node of the list
 *
 * Return:
 *	number of nodes
 *	98 if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len, i;
	const listint_t **buffer;

	buffer = malloc(1024 * sizeof(listint_t *));
	if (buffer == NULL)
		return (98);

	len = 0;
	while (head)
	{
		for (i = 0; i < len; i++)
			if (buffer[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				buffer = NULL;
				break;
			}
		if (!buffer)
			break;
		printf("[%p] %d\n", (void *)head, head->n);
		buffer[len++] = head;
		head = head->next;
	}

	free(buffer);
	return (len);
}
