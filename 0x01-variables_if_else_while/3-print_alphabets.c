#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
