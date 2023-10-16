#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @str: to be printed
 * Return: nothing
 */
void print_rev(char *str)
{
	int m = strlen(str) - 1;

	while (m >= 0)
	{
	putchar(str[m]);
	m--;
	}
	putchar('\n');
}
