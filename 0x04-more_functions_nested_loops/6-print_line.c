#include "main.h"

/**
 * print_line - prints line using underscore n times
 * @n: number of times to be printed
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
