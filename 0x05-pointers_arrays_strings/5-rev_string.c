#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Reverses a string of chars
 * @s: the address of the first char of the string
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	for (i = 0, len = _strlen(s) - 1; i < len; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
