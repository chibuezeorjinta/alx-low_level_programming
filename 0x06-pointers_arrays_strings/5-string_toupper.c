#include "main.h"

/**
 * *string_toupper - entry
 * @src: given character
 * Return: src
 */
char *string_toupper(char *str)
{
	int n, i;

	for (i = 0; str[i] != '\n'; i++)
	{
		n = str[i];

		if (n >= 97 && n <= 122)
		{
			str[i] = (n - 32);
		}
	}

	return (str);
}
