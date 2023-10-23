#include "main.h"
/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: one input
 * @accept: anotehr input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
		return (s);
		}
		s++;
	}
	return (NULL);
}
