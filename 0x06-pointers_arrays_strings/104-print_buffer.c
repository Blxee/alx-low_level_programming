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

	for (i = 0; i < size; i += 0xa, b += 0xa)
	{
		printf("%08x: ", i);

		for (j = 0; j < 0xa; j += 2)
		{
			if (i + j >= size)
			{
				printf("     ");
				continue;
			}
			printf("%02x", b[j]);
			printf("%02x ", b[j + 1]);
		}
		for (j = 0; j < 0xa; j++)
		{
			if (i + j >= size)
			{
				printf("\n");
				return;
			}
			else if (isprint(b[j]))
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
