#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @s: the string to capitalize
 * Return: The pointer to the string
 */

char *cap_string(char *s)
{
	char sep[14] = " \t\n,;.!?\"(){}";
	int i, j, word_fnd = 0;

	for (i = 0; s[i]; i++)
	{
		if (!word_fnd && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'A' + s[i] - 'a';
			word_fnd = 1;
		}
		else if (!word_fnd && s[i] >= 'A' && s[i] <= 'Z')
		{
			word_fnd = 1;
		}
		else
		{
			for (j = 0; sep[j]; j++)
				if (s[i] == sep[j])
					word_fnd = 0;
		}
	}

	return (s);
}
