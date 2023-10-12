#include "main.h"


/**
 * more_numbers - Print 10 times the numbers from 0  to 14
 * Return: 10 times from  0 up to 14
 */

void more_numbers(void)

{

	int k, l;

	for (k = 0; k < 10; x++)
	{
	for (l = 0; l <= 14; y++)
	{
	if (l > 9)
	{
	_putchar((l / 10) + '0');
	}
	_putchar((l % 10) + '0');
	}
	_putchar('\n');
	}
}
