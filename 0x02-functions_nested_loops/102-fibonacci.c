#include <stdio.h>
/**
 * main - Prints fibonach
 * Return: Nothing
 */
int main(void)
{
	int m = 0;

	long k = 1, l = 2;

	while (m < 50)
	{
	if (m == 0)
	printf("%ld", k);
	else if (m == 1)
	printf(", %ld", l);
	else
	{
	l += k;
	k = l - k;
	printf(", %ld", l);
	}
	++m;
	}
	printf("\n");
	return (0);
}
