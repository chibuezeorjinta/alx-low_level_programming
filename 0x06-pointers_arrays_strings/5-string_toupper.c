#include "main.h"

/**
 * *string_toupper - entry
 * @*src given character
 * Return: src
 */
char *string_toupper(char *src)
{
	int n, i;

	for (i = 0; src[i] != '\n'; i++)
	{
		n = src[i];

		if (n >= 97 && n <= 122)
		{
			src[i] = (n - 32);
		}
	}
	
	return (src);
}
