#include "main.h"

/**
 * times_table - shows the 9 time table witn 0
 * Return: empty output
 */
void times_table(void)
{

	int e, r, t, y, u;

	for (e = 0; e <= 9; e++)
	{
	for (r = 0; r <= 9; r++)
	{
	t = e * r;
	if (t > 9)
	{
	y = t % 10;
	u = (t - y) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(u + '0');
	_putchar(y + '0');
	}
	else
	{
	if (r != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(t + '0');
	}
	}
	_putchar('\n');
	}
}


