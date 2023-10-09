#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enetry point
 *
 * Return: 0
 */
int main(void)
{
	int l, k;

	for (l = '0'; l < '9'; l++)
	{
	for (k = l + 1; k <= '9'; k++)
	{
	if (k != l)
	{

	putchar(l);
	putchar(k);
	if (l == '8' && k == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
