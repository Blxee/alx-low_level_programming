#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints variable amount of args of different types
 *
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	va_list va;

	va_start(va, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(va, int));
			break;
		case 'i':
			printf("%d", va_arg(va, int));
			break;
		case 'f':
			printf("%f", va_arg(va, double));
			break;
		case 's':
			str = va_arg(va, char *);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(va);
}
