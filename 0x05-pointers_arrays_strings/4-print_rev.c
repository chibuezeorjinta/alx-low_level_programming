#include "main.h"
#include <stdio.h>

/**
*print_rev - print
*@str: given array
*/
void print_rev(char *str)
{
	int i, n, a;

	for (i = 0; str[i] != '\0'; i++)
	{
	a = i - 1;
	}

	for (n = a; n >= 0; n--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
