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
		n = i;
	}
	while (n >= 0)
	{
		_putchar(str[n]);
		n--;
	}
	_putchar('\n');
}
