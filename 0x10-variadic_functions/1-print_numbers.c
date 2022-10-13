#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry to function
 * @separator: character for spacing
 * @n: number of number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int j, i;
	va_start(args, n);

	j = n;
	if (separator != NULL)
	{
		for (i = 0; i < j; i++)
		{
			if (i != (j - 1))
			{
				printf("%i%s", va_arg(args,int), separator);
			}
			else
				printf("%i", va_arg(args,int));
		}
	}
	else
	{
		for (i = 0; i < j; i++)
			printf("%i", va_arg(args,int));
	}
	printf("\n");
}
