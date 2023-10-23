#include "main.h"
/**
 * print_diagsums -  function that prints the sum
 * @a: input
 * Return: 0
 */
void print_diagsums(char (*a)[8])
{
	int l, m;


	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[l][m]);
		_putchar('\n');
	}
}
