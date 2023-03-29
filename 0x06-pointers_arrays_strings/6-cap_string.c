#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @s: the string to capitalize
 * Return: The pointer to the string
 */

char *cap_string(char *s)
{
	char sep[14] = " \t\n,;.!?\"(){}";
	int i, j, word_fnd = 0;

	for (i = 0; s[i]; i++)
	{
		if (!word_fnd && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'A' + s[i] - 'a';
			word_fnd = 1;
		}
		else if (!word_fnd && s[i] >= 'A' && s[i] <= 'Z')
		{
			word_fnd = 1;
		}
		else
		{
			for (j = 0; sep[j]; j++)
				if (s[i] == sep[j])
					word_fnd = 0;
		}
	}

	return (s);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
