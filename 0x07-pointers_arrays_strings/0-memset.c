#include "main.h"
/**
 * _memset - Write a function that
 * @s: direction or address
 * @b: byte
 * @n: another byte
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}
