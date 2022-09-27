#include "main.h"

/**
 * *_memset - replace entries with a file
 * @b: place holder
 * @n: number of bytes
 * @s: file tobe replace
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
