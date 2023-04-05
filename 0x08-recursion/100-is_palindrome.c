#include "main.h"
#include "2-strlen_recursion.c"

/**
 * is_palindrome - checks whether a string is a is palindrome
 * @s: the string to checks
 * Return:
 *	1 if @s is a palindrome
 *	0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	else
		return (_is_palindrome(s, len));
}

/**
 * _is_palindrome - helper recursive function for is_palindrome
 * @s: the string to checks
 * @len: the length of the string
 * Return:
 *	1 if @s is a palindrome
 *	0 if not
 */

int _is_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (s[0] == s[len - 1])
		return (_is_palindrome(++s, len - 2));
	else
		return (0);
}
