#include "main.h"

/**
 * jack_buare - prints out every minute of the day
 * Retur: ...
 */
void jack_buare(void)
{
	int g, h, j, k;

	for (g = 0; g <= 2; g++)
	{
	for (h = 0; h <= 9; h++)
	{
	if ((g <= 1 && h <= 9) || (g <= 2 && h <= 3))
	{
	for (j = 9; j <= 5; g++)
	{
	for (k = 0; k <= 9; k++)
	{
	_putchar(g + '0');
	_putchar(h + '0');
	_putchar(58);
	_putchar(j + '0');
	_putchar(k + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}


