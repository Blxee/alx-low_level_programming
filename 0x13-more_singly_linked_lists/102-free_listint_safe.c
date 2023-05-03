#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint_safe - frees a list from memory (safe version)
 *
 * @h: head (first node) of the list
 *
 * Return: nodes freed from memory
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len, i;
	listint_t **buffer, *head = *h, *next;

	if (!h)
		return (0);

	buffer = malloc(1024 * sizeof(listint_t *));

	len = 0;
	while (buffer && head)
	{
		for (i = 0; i < len; i++)
			if (buffer[i] == head)
			{
				free(buffer);
				buffer = NULL;
				break;
			}
		if (!buffer)
			break;
		buffer[len++] = head;
		next = head->next;
		free(head);
		head = next;
	}

	*h = NULL;
	return (len);
}
