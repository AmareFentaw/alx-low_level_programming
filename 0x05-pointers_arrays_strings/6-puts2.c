#include <stdio.h>
/**
 * puts2 - each string with the new line.
 * @s: to be printed
 * Return: strings in anew line each.
 */
void puts2(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	if (a % 2 == 0)
	{
	putchar(s[a]);
	}
	a++;
	}
	putchar('\n');
}
