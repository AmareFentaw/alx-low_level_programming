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
	unsigned int;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
