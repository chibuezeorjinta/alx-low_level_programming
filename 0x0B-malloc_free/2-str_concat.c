#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int c, b, i, k, j;
	char *a;

	for (i = 0; s1[i] != '\0'; i++)
	{
		i = i;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		j = j;
	}
	
	if (s1 == NULL)
		c = j;
	else if (s2 == NULL)
		c = i;
	else if (s1 == NULL && s2 == NULL)
	{
		a = NULL;
	}
	else
		c = i + j;
	k = c;
	b = 0;

	a = malloc(c * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		a[c] = s1[c];
	for (c = i; c < k; c++)
	{
		a[c] = s2[b];
		b++;
	}
	a[c] = '\0';
	return (a);
}
