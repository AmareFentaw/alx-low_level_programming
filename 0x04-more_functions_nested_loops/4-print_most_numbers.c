#include "main.h"
/**
 * print_most_numbers - print numbers frome 0 to 9
 * except for 2 and 4
 * Return: from 0 to 9 leave 4 and 2
 */
void print_most_numbers(void)
{
	int m = 0;

	for (; m <= 9; m++)
	{
	if (m == 2 || m == 4)
	{
	continue;
	}
	else
	{
	_putchar(m + '0');
	}
	_putchar('\n');
}


