#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "keygen_tools1.c"
#include "keygen_tools2.c"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	char *magic_str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char pwd[7];
	char *user = argv[1];
	int len = strlen(user);

	(void)argc;
	pwd[0] = magic_str[f1(len)];
	pwd[1] = magic_str[f2(user, len)];
	pwd[2] = magic_str[f3(user, len)];
	pwd[3] = magic_str[f4(user, len)];
	pwd[4] = magic_str[f5(user, len)];
	pwd[5] = magic_str[f6(*user)];

	printf("%s", pwd);
	return (EXIT_SUCCESS);
}
