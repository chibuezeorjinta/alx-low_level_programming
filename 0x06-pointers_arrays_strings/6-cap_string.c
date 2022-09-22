#include "main.h"

/**
 * *cap_string - entry
 * @str: input
 * Return: str
 */
char *cap_string(char *str)
{
	char d[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		for (j = 0; d[j] != '\0'; j++)
		{
			if (str[i - 1] == d[j] && str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
