#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The number to be printed.
 * Return: Nothing
 */

void print_number(int n)

{

	unsigned int s = n;

	if (n < 0)
	{
	n *= -1;
	s = n;
	putchar('-');
	}
	s /= 10;
	if (s != 0)
	print_number(s);
	putchar((unsigned int) n % 10 + '0');
}
