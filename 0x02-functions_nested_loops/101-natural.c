#include <stdio.h>

/**
 * main - Print multiple of 3 or 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
	int y, r = 0;

	while (y < 1024)
	{
	if ((y % 3 == 0) || (y % 5 == 0))
	{
	r += y;
	}
	y++;
	}
	printf("%d\n", r);
	return (0);
}

