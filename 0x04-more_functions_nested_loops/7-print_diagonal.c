#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - To make a diagonal line
 * @n: The number f repeating
 * Return: Nothing
 */

void print_diagonal(int n)

{

	int b, a;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (b = 0; b < n; b++)
	{
	for (a = 0; a < b; a++)
	{
	putchar(32);
	}
	putchar(92);
	putchar('\n');
	}
	}
}
