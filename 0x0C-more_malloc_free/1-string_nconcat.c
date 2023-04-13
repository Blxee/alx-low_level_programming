#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the size from @s2 to concatenate
 * Return:
 *	A pointer to the new string
 *	NULL if the process fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result, *ch;
	unsigned int len = 1;

	if (s1)
		len += strlen(s1);
	if (s2)
	{
		unsigned int l = strlen(s2);

		len += l < n ? l : n;
	}

	ch = result = malloc(sizeof(*result) * len);

	if (!result)
		return (NULL);

	if (s1)
		while (*s1)
		{
			*ch++ = *s1++;
			len--;
		}

	if (s2)
		while (len > 1 && *s2)
		{
			*ch++ = *s2++;
			len--;
		}

	*ch = '\0';

	return (result);
}
