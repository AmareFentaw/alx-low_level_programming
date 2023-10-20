#include "main.h"

/**
 * reverse_array - to reverse integers.
 * @a: the array
 * @n: the number of elements in an array
 *
 */

void reverse_array(int *a, int n)

{
	int amare, remedan;

	for (remedan = n - 1; remedan >= n / 2; remedan--)
	{
	amare = a[n - 1 - remedan];
	a[n - 1 - remedan] = a[remedan];
	a[remedan] = mare;
	}
}

