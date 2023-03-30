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

	for (i = 0; i < size; i++, b += 0xa)
	{
		printf("%08x: ", 255);

		for (j = 0; j < 0xa; j += 2)
		{
			printf("%02x", b[j]);
			printf("%02x ", b[j + 1]);
		}
		for (j = 0; j < 0xa; j++)
		{
			if (isprint(b[j]))
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
