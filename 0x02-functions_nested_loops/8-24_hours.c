#include "main.h"

/**
 * jack_bauer - entry to print time
 */
void jack_bauer(void)
{
	char i, j;

	i = 0;

	while (i < 24)
	{
		j = 24;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
