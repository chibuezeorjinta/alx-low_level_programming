#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code for ALX School students.
 * @c: the character to be checked if uppercase
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
