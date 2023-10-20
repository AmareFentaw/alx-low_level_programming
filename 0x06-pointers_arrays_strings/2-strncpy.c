#include <stdio.h>

/**
 * main - function that copies a string
 * Return: 0
 */

int main(void)
{
	int a;
	int l[5];
	int *p;

	l[2] = 1024;
	p = &a;
	*(p + 5) = 98;
	printf("a[2] = %d\n", l[2]);
	return (0);
}
