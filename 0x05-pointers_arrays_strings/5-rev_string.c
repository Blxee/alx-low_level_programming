#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Reverses a string of chars
 * @s: the address of the first char of the string
 */

void rev_string(char *s)
{
	int i, len;
	char temp[1042];

	len = _strlen(s);

	for (i = 0; i < len; i++)
		temp[i] = s[i];

	for (i = 0, --len; i <= len; i++)
	{
		s[i] = temp[len - i];
	}
}
