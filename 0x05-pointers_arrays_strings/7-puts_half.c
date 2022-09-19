#include "main.h"

/**
 * puts_half - entry
 * @str: given string
 */
void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i;
	}
	a = i;
	if (a % 2 == 0)
	{
		for (a = (i / 2); a < i; a++)
		{
			_putchar(str[a]);
		}
	}
	if (a % 2 != 0)
	{
		for (a = i - ((i - 1) / 2); a < i; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
