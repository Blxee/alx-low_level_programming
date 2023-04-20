#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints variable amount of numbers to stdout
 *
 * @separator: a separator string to use between numbers
 * @n: argument count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	if (!separator)
		separator = "";

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(va, int));
		else
			printf("%d%s", va_arg(va, int), separator);
	}
	va_end(va);
}
