#include <stdio.h>

/**
 * swap_int - swaps two integers.
 * @n: one number to be swapped
 * @l: another numnber to be sawpped again.
 * Return: 0
 */
void swap_int(int *l, int *n)
{
	int tmp = *l;

	*l = *n;
	*n = tmp;
}
