#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer in hexadecimal to stdout
 * @b: the buffer to print
 * @size: the size of the buffer
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 0xa)
	{
		printf("%08x: ", i);

		for (j = 0; j < 0xa; j += 2)
		{
			if ((j + i) >= size)
				printf("     ");
			else
				printf("%02x%02x ", b[i + j], b[i + j + 1]);
		}
		for (j = 0; j < 0xa; j++)
		{
			if ((j + i) >= size)
				break;
			else if (isprint(b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		if (i >= size)
			continue;
		printf("\n");
	}
}
