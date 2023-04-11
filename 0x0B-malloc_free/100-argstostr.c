#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments given
 * @ac: argument count
 * @av: argument vector
 * Return:
 *	A pointer to the new concatenated string
 *	NULL if it wasn't successful
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int len, i, j, k;

	if (!ac || !av)
		return (NULL);

	for (i = 0, len = 0; i < ac; i++)
		len += strlen(av[i]);

	len += ac + 1;

	result = malloc(len * sizeof(char));

	if (!result)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			result[k] = av[i][j];
		result[k++] = '\n';
	}

	result[k] = '\0';

	return (result);
}
