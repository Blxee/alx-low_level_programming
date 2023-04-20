#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints variable amount of strings to stdout
 *
 * @separator: a separator to use
 * @n: variable agrument count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	if (!separator)
		separator = "";

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%s\n", va_arg(va, char *));
		else
			printf("%s%s", va_arg(va, char *), separator);
	}
	va_end(va);
}
