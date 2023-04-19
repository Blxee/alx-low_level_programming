#include "main.h"

/**
 * print_name - calls a print function on a string
 *
 * @name: a string to use as a parameter
 * @f: the function to call
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
