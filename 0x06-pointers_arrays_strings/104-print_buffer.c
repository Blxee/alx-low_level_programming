#include "main.h"
#include <stdio.h>

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
				printf("     ");
			else
				printf("%02x%02x ", b[j], b[j + 1]);
		}

		for (j = 0; j < 0xa; j++)
		{
			if (i + j >= size)
				printf(" ");
			else if (b[j] >= 0x20 && b[j] <= 0x7e)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
