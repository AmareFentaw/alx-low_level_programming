#include "main.h"
/**
 * print_most_numbers - Print numbers frome 0 to 9
 * Description: Prints numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
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
	}
	_putchar('\n');
}
