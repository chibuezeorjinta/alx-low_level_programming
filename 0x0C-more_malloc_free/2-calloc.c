#include <stdlib.h>
#include "main.h"

/**
* *_memset - copies a character to the firstn characters of the string pointed
*@s: original string
*@b: value to remplace
*@n: number of bytes
*Return: s (string modify)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Entry
 * @nmemb: number of characters
 * @size: byte size of characters
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	_memset(a, 0, (nmemb * size));
	return (a);
}
