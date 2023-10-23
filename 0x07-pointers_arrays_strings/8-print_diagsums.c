#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum
 * @a: input
 * @size: another input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int l, m, amare = 0, dani = 0;

	for (l = 0; l <= (size * size); l = l + size + 1)
		amare = amare + a[l];

	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
		dani = dani + a[m];
	printf("%d, %d\n", amare, dani);
}
