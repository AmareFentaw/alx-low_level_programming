#include "main.h"
/**
 * print_numbers - to print numbers form 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int i;


	for (i = 0; i < 8; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
