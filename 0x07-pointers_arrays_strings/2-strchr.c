#include "main.h"
#include <stdio.h>
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: ...
 * @c: ...
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
			s++;
	}
	return (NULL);
}

