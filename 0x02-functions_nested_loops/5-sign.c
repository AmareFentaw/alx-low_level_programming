#include "main.h"

/**
 * print_sign - Prints tne sign of a number
 * @n: The to be identified
 * Return: 1 or negative num, -1 for negative numr or zero for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else  if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}

