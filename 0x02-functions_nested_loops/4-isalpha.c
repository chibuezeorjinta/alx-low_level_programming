#include "main.h"

/**
 * _isalpha - check if input is an alphabet
 * @c: input
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
