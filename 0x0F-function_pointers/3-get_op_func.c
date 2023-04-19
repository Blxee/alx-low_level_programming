#include "3-calc.h"

/**
 * get_op_func - returns an oprator function according to symbol
 *
 * @s: a string containing the operator
 *
 * Return:
 *	a pointer to an operator function when successful
 *	NULL in case of failure
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op && s)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
