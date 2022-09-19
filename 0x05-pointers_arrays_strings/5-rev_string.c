#include "main.h"

/**
*rev_string - entry
*@s: given
*/
void rev_string(char *s)
{
	int i, a, j;
	char o[5000];

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}


	j = i - 1;
	for (a = 0; a < i; a++)
	{
		*(o + j) = *(s + a);
		j--;
	}
	for (a = 0; a < i; a++)
	{
		*(s + a) = *(o + a);
	}
}
