#include "main.h"
#include <stdio.h>

/**
*print_rev - print
*@str: given array
*/
void print_rev(char *str)
{
	int i, n, a;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	a = i;

	for (n = a - 1; n >= 0; n--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
