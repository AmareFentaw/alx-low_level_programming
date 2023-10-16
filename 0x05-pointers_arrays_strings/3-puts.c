#include <stdio.h>
/**
 * _puts - to print strings in a new line
 * @str: to be printed
 * Return: 0
 */

void _puts(char *str)
{
	char *strl

	while (*str != '\0')
	{
	putchar(*str);
	*str++;
	}
	putchar('\n');
}
