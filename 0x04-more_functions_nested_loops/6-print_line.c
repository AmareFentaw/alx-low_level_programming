#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line based on parameter
 * @m: The number of lines to br drown
 * Return: nothing
 */

void print_line(int m)

{

	int n;

	if (m <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (n = 0; n < m; n++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
