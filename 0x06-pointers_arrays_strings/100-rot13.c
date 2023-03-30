#include "main.h"

/**
 * rot13 - Translates a string to tot13 dialect
 * @s: the string to translate
 * Return: The pointer to the string
 */

char *rot13(char *s)
{
	int i;
	char *dict = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = dict[s[i] - 'A'];
	}

	return (s);
}
