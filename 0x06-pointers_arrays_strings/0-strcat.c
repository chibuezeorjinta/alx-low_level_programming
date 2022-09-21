#include "main.h"

/**
 * *_strcat - entry
 * @dest: main string
 * @src: source array
 * Return: Returns a pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
		i = i;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
