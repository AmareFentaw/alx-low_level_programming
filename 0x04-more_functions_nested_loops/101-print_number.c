#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: the number to be printed.
 * Return: empty
 */

void print_number(int n)

{

	unsigned int s = n;

	if (n < 0)
	{
	n *= -1;
	s = n;
	_putchar('-');
	}
	s /= 10;
	if (s != 0)
	_print_number(s);
	putchar((unsigned int) n % 10 + '0');
}
