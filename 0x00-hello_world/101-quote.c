#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: print phrase without using printf or puts
 * Return: 0
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, quote, sizeof(char) * sizeof(quote));
	return (0);
}
