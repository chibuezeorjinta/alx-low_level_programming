#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*_strlen - entry
*@s: inpited string pointer
*Return: return i
*/
unsigned int _strlen(char *s)
{
	unsigned int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		n = n;
	}
	return (n);
}

/**
 * string_nconcat - Entry
 * @s1: first string
 * @s2: second string
 * @n: extent of second string to concatinate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
	{
		a = malloc(_strlen(s1) - 1 + _strlen(s2));
		n = _strlen(s2);
	}

	else if (n < _strlen(s2))
		a = malloc(_strlen(s1) + n);

	if (a == NULL)
		return (NULL);

	i = _strlen(s1);
	j = 0;

	for (p = 0; p < i; p++)
		a[p] = s1[p];

	for (p = i; j < n; p++)
	{
		a[p] = s2[j];
		j++;
		p = p;
	}
	a[p] = '\0';
	return (a);
}
