#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
