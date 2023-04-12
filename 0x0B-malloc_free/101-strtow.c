#include "main.h"
#include <string.h>



/**
 * strtow - Splits string into word array
 * @str: the string to be split
 * Return:
 *	A pointer to the array if it was successful
 *	NULL elsewise
 */

char **strtow(char *str)
{
	char **arr, *word;
	int len, i, j, k;

	if (!str || !*str)
		return (NULL);
	while (*str == ' ')
		str++;
	len = 1 + word_count(str);
	arr = malloc(len * sizeof(char *));
	if (!arr)
		return (NULL);
	for (i = 0, j = 0; i < len; i++)
	{
		while (*str == ' ')
			str++;
		for (k = 0, word = str; *word && *word != ' '; word++)
			k++;
		arr[i] = malloc((k + 1) * sizeof(char));
		if (!arr[i])
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (k = 0, word = str; *word && *word != ' '; k++, word++)
			arr[i][k] = *word;
		arr[i][k] = '\0';
		str = word;
	}
	arr[i] = NULL;
	return (arr);
}

/**
 * word_count - counts words in a string
 * @str: the string to counts its words
 * Return: number of space separated words
 */

int word_count(char *str)
{
	int i, len;

	for (i = 0, len = 0; str[i];)
	{
		if (str[i] != ' ')
		{
			len++;
			while (str[i] && str[i] != ' ')
				i++;
		}
		else
			i++;
	}

	return (len);
}
