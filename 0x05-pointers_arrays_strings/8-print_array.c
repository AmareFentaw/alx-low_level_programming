#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: one number
 * @n: another number
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%D", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}

