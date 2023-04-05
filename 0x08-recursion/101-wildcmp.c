#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return:
 *	1 if the strings are identical
 *	0 elsewise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 || *s2)
	{
		if (*s1 == *s2)
			return (wildcmp(++s1, ++s2));
		if (s2[0] == '*' && s2[1] == '*')
			return (wildcmp(s1, ++s2));
		if (*s2 == '*')
		{
			if (s1[0] == s2[1] && !wildcmp(s1, ++s2))
				return (1);
			if (s1[1] == s2[1])
				return (wildcmp(++s1, ++s2));
			else
				return (wildcmp(++s1, s2));
		}
		return (0);
	}
	return (1);
}
