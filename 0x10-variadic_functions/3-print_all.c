#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Entry
 * @format
 */
void print_all(const char * const format, ...)
{
	int a;
	va_list arg;
	char *p;
	char *sep;

	va_start(arg, format);
	a = 0;
	sep = ", ";

	while (format[a] != '\0')
	{
		if (format[a + 1] =='\0')
			sep = "";
		switch (format[a])
		{
			case 'c':
				printf("%c%s", (char)va_arg(arg, int), sep);
				break;
			case 'i':
				printf("%i%s", va_arg(arg, int), sep);
				break;
			case 'f':
				printf("%f%s", (float)va_arg(arg, double), sep);
				break;
			case 's':
				p = va_arg(arg, char *);
				if (p != NULL)
				{
					printf("%s%s", p, sep);
					break;
				}
				printf("(nil)");
				break;
		}
		a++;
	}
	printf("\n");
}
