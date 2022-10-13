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

	va_start(arg, format);
	a = 0;

	while (format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", (char)va_arg(arg, int));
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(arg, double));
				break;
			case 's':
				p = va_arg(arg, char *);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[a] == 'c' || format[a] == 'i' || format[a] == 'f') && format[a + 1] != '\0')
			printf(", ");
		else if((format[a] == 's') && (format[a + 1] != '\0'))
				printf(", ");
		a++;
	}
	printf("\n");
}
