#include "main.h"

/**
 * print_times_table - prints the times table up to the specified int
 * @n: the integer to stop at
 */
void print_times_table(int n)
{
	int op1, op2;

	if (n > 15 || n < 0)
		return;

	for (op1 = 0; op1 <= n; op1++)
	{
		for (op2 = 0; op2 <= n; op2++)
		{
			int res = op1 * op2;

			int ones = res % 10,
			    tens = res / 10 % 10,
			    hundreds = res / 100;

			if (op2 != 0)
			{
				_putchar(' ');
				_putchar(hundreds == 0 ? ' ' : '0' + hundreds);
				_putchar(tens == 0 && hundreds == 0 ? ' ' : '0' + tens);
			}
			_putchar('0' + ones);
			if (op2 != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
