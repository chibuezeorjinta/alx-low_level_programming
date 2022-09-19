#include "main.h"

/**
*print_rev - print
*@str: given array
*/
void print_rev(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i;
	}
	for (n = i; n >= 0; n--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
