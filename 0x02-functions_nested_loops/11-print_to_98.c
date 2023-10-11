#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all up to 98
 * @m: Starting number.
 * Return: 0.
 */
void print_to_98(int m)
{
	if (m <= 98)
	{
	for (; m <= 98; m++)
	{
	if (m == 98)
	{
	printf("%d", m);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", m);
	}
	}
	}
	else
	{
	for (; m >= 98; m--)
	{
	if (m == 98)
	{
	printf("%d", m);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", m);
	}
	}
	}
}
