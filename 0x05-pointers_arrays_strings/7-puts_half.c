#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of the string.
 * @str: to be printed
 * Return: nothig
 */

void puts_half(char *str)
{
	int m;

	int len = strlen(str);

	int half_len = (len - 1) / 2;

	if (len % 2 != 0)
	{
	half_len++;
	}

	for (m = half_len; m < len; m++)
	{
	putchar(str[m]);
	}
}
/**
 * main - Entry point of the program.
 *
 * Return: 0 on success, or a non-zero value on failure.
 */
int main(void)
{
	char str[] = "erton";

	puts_half(str);

	return (0);
}

