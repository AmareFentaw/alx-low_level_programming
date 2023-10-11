#include "main.h"
/**
 * print_last_digit - To print out the last one
 * @l: To be printed
 * Return: Value of the last digit.
 */
int print_last_digit(int b)
{
	int l;

	l = b % 10;
	if (l < 0)
	{
	l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
