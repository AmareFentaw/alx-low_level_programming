#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - from 0 to 9
 * Return:  0 to 9
 */

void print_most_numbers(void)

{

	int a = 0;

	for (; a <= 9; a++)
	{
	if (a == 2 || a == 4)
	{
	continue;
	}
	else
	{
	putchar(a + '0');
	}
	}
	putchar('\n');
}
