#include "main.h"
/**
 * print_diagsums -  function that prints the sum
 * @a: input
 * @size: anothe input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int l;
	int amare1 = 0;
	int amare2 = 0;

	for (l = 0; l < size; l++)
	{
		amare1 += a[l * (size + 1)];
		amare2 += a[(size - l - 1) * (size + 1)];
	}
	int total = amare1 + amare2;

	for (int l = total; l > 0; l /= 10)
	{
	putchar(l % 10 + '0');
	}
	putchar('\n');
}
