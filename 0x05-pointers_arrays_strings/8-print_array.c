#include <stdio.h>

/**
 * print_array - entry
 * @n: given number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
