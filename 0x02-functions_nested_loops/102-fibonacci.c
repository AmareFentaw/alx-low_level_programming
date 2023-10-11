#include <stdio.h>
/**
 * fibonacci - Prints fibonach
 * Return: Nothing
 */
int fibonacci(void)
{
	int m = 0;

	long k = m, l = 2;

	while (m < 50)
	{
	if (m == 0)
	printf("%d", k);
	else if (m == 1)
	printf(", %d", l);
	else
	{
	l += k;
	k = l - k;
	printf(", %d", l);
	}
	++m;
	}
	printf('\n')'
	return (0);
}
