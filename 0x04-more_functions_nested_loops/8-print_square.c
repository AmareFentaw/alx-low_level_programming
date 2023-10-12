#include "main.h"
#include <stdio.h>


/**
 * print_square - Prints n squares based on the amount of n
 * @size: number of squares
 * Return: nothing
 */

void print_square(int size)

{

	int d, f;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (d = 0; d < size; d++)
	{
	for (f = 0; f < size; f++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
