#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int op1, op2;

	for (op1 = 0; op1 < 10; op1++)
	{
		for (op2 = 0; op2 < 10; op2++)
		{
			int product = op1 * op2;
			int tens = product / 10, ones = product % 10;

			if (tens > 0)
				_putchar('0' + tens);
			else
				_putchar(' ');

			_putchar('0' + ones);

			if (op1 == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');

	}
}
