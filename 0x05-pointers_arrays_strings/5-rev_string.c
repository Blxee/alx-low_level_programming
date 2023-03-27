#include "main.h"

/**
 * rev_string - Reverses a string of chars
 * @s: the address of the first char of the string
 */

void rev_string(char *s)
{
	int i, len;

	for (i = 0, len = _strlen(s); i < len; i++)
		s[i] = s[len - i - 1];
}
