#include "main.h"

/**
 * leet - Converts string to leet spelling system
 * @s: the string to replace its characters
 * Return: The pointer to the string
 */

char *leet(char *s)
{
	char chars[3][5] = {
		"aeotl",
		"AEOTL",
		"43071"
	};
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; j < 5; j++)
			if (s[i] == chars[0][j] || s[i] == chars[1][j])
				s[i] = chars[2][j];

	return (s);
}
