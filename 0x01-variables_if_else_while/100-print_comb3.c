#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int l, k;

	for (l = 0; l <= 9; l++)
	{
		for (k = l + 1; k <= 9; k++)
		{
			putchar(48 + l);
			putchar(48 + k);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
