#include "main.h"

/**
 * *string_toupper - entry
 * @*: given character
 * Return: *
 */
char *string_toupper(char *)
{
	int n, i;

	for (i = 0; *[i] != '\n'; i++)
	{
		n = *[i];

		if (n >= 97 && n <= 122)
		{
			*[i] = (n - 32);
		}
	}
	
	return (*);
}
