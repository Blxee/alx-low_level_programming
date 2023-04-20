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
	char *str;
	va_list va;

	if (!separator)
		separator = "";

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(va, char *);
		if (!str)
			str = "(nil)";
		if (i == n - 1)
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	printf("\n");
	va_end(va);
}
