#include "main.h"

/**
*puts2 - entry
*@str: given string
*/
void puts2(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i;
	}

	a = i;
	for (i = 0; i < a; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
