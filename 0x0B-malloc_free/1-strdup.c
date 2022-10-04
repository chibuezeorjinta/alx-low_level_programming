#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Entry
 * @str: String given to duplicate
 */
char *_strdup(char *str)
{
	char *a;
	int i;

	a = malloc(sizeof(str));
	i = 0;

	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
