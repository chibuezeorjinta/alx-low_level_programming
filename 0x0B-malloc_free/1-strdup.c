#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry
 * @str: String given to duplicate
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	j = 0;

	while (j < i)
	{
		a[j] = str[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
