#include "main.h"

/**
 * _strlen_recursion - determine the length of a string
 * @s: the string which length is to be determined
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	return (_inner_strlen(s, 0));
}

/**
 * _inner_strlen - helper recursive function _strlen_recursion
 * @s: the string which length is to be determined
 * @n: a placeholder, it should always be 0
 * Return: the length of the string
 */

int _inner_strlen(char *s, int n)
{
	if (!*s)
		return (n);
	return (_inner_strlen(++s, ++n));
}
