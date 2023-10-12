#include "main.h"
#include <stdio.h>


/**
 * more_numbers -10 x from  0 to 14
 * Return: 0 up to 14
 */

void more_numbers(void)

{

	int w, e;

	for (w = 0; w < 10; w++)
	{
	for (e = 0; e <= 14; e++)
	{
	if (e > 9)
	{
	putchar((e / 10) + '0');
	}
	putchar((e % 10) + '0');
	}
	putchar('\n');
	}
}
