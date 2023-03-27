#include "main.h"

/**
 * _atoi - Converts from string to integer
 * @s: the string to convert
 * Return: 0 if the conversion is successful, 1 elsewise
 */

int _atoi(char *s)
{
	int started = 0,
	    sign = 1;
	long result = 0;

	while (*s != '\0')
	{

		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			result *= 10;
			result += *s - '0';
			started = 1;
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	return (result * sign);
}
