#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - sum all inputs
 * @n: number of expected inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	int i, j;

	if (n == 0)
		return (0);

	sum = 0;
	j = n;
	va_start(args,n);
	for (i = 0; i < j; i++)
	{
		sum += va_arg(args,int);
	}
	va_end(args);
	return(sum);
}
