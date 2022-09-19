#include "main.h"

/**
*swap_int - entry
*@a: given
*@b: given
*/
void swap_int(int *a, int *b)
{
	int m, n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;
}

