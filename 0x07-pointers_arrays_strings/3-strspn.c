#include "main.h"
#include <stdio.h>
/**
 * _strspn - Write a function that gets the length of a prefix.
 * @s: ..
 * @accept: ...
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		if (!strchr(accept, *s))
		{
		break;
	}
	s++;
	n++;
	}
	return (n);
}
