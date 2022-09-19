#include "main.h"

/**
*print_rev - print
*@str: given array
*/
void print_rev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i;
	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
