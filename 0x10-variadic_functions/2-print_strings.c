#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry
 * @separator: string
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i, j;
	char *string;

	va_start(arg, n);
	j = n;
	if (separator != NULL)
	{
		for (i = 0; i < j; i++)
		{
			string = va_arg(arg, char *);
			if (string == NULL)
				string = "(nil)";

			if (i < (j - 1))
			{
				printf("%s%s", string, separator);
			}
			else
				printf("%s", string);
		}
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			string = va_arg(arg, char *);
			if (string == NULL)
				string = "(nil)";

			printf("%s", string);
		}
	}
	printf("\n");
}
