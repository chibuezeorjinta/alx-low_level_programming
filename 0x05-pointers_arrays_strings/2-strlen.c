#include "main.h"

/**
*_strlen - entry
*@s: inpited string pointer
*Return: return i
*/
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++);
	return (n);
}
