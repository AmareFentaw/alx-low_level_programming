#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int g, q;

	for (g = 0; g <= 98; g++)
	{
	for (q = g + 1 ; q <= 99; q++)
	{
	putchar((g / 10) + '0');
	putchar((g % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
	if (g == 98 && q == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
