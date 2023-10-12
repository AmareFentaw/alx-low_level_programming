#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Prints a triangle of squares
 * @size: The size of the squares triangle
 * Return: Nothing
 */

void print_triangle(int size)

{

	int a, b, c;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = size - a; b > 1; b--)
	{
	putchar(32);
	}
	for (c = 0; c <= a; c++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
