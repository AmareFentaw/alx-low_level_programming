#include <stdio.h>
/**
 * puts_half - prints half of the string.
 * @str: to be printed
 * Return: nothig
 */

void puts_half(char *str)
{
	int len = strlen(str);

	int half_len = (len - 1) / 2;

	if (len % 2 != 0)
	{
	half_len++;
	}

	for (int m = half_len; m < len; m++)
	{
	putchar(str[m]);
	}
	putchar'\n');
}

