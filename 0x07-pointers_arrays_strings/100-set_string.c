#include "main.h"

/**
 * set_string - Sets the value of a pointer to another
 * @s: the pointer to set
 * @to: the new value that should be set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
