#include "main.h"

/**
 * jack_bauer - prints every minute withit 24 hours
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			int ones, tens;

			tens = hours / 10;
			ones = hours % 10;
			if (hour < 10)
				_putchar('0');
			else
				_putchar('0' + tens);
			_putchar('0' + ones);

			tens = minutes / 10;
			ones = mintues % 10;
			if (minute < 10)
				_putchar('0');
			else
				_putchar('0' + tens);
			_putchar('0' + ones);

			_putchar('\n');
		}
	}
}
