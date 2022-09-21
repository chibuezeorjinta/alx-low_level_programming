#include "main.h"

/**
 * *_strncpy - entry to copy string
 * @dest: receiving array
 * @src: source array
 * @n: limiting number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int i;
	int j;

	for (j = 0; src[j] != '\0'; j++)
		j = j;


	i = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}
	if (n >= j)
		dest[j] = '\0';
	return (dest);
}
