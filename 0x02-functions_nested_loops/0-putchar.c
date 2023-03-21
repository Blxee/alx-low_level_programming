#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar
 * Return: 0 (success)
 */
int main(void)
{
	char str[] = "_putchar\n\0";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
