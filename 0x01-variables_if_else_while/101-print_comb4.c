#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int k, m, q;

	for (k = '0'; k < '9'; k++)
	{

	for (m = k + 1; m <= '9'; m++)
	{
	for (q = m + 1; q <= '9'; q++)
	{
	if ((m != k) != q)
	{
	putchar(k);
	putchar(m);
	putchar(q);
	if (k == '7' && m == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
