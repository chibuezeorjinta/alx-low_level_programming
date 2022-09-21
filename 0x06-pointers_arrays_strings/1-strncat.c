#include "main.h"

/**
 * *_strncat - entry
 * @dest: main string
 * @src: source array
 * @n: number of bytes to concatinate from source
 * Return: Returns a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
		i = i;

	for (a = 0; a < n; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
