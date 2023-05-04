#include "main.h"

/**
 * get_endianness - determines the the bit order of the current machine
 *
 * Return:
 *	1 if it's little indian
 *	0 if it's big indian
 */
int get_endianness(void)
{
	int n = 1;
	char *p = (char *)&n;

	return (*p);
}
