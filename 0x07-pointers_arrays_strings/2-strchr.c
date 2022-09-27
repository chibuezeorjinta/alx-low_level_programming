#include "main.h"

/**
 * *_strchr - locate first occurance of a character
 * @s: source string
 * @c: requried character
 * Return: return a point to the required character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\n'; i++)
	{
		if (*(s + i) == c)
			return (s);
	}
	return (0);
}
