#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: The array if integer to be reversed.
 * @n: The number of elements in the array.
 *
 */

void reverse_array(int *a,int n)



{
	int tmp, index;
	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 -index];
	a[index] = temp;
	}
}
