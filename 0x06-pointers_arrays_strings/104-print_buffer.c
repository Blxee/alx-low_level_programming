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
		printf("\n");

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
				printf(" ");
			else if (isprint(b[j]))
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}


int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
