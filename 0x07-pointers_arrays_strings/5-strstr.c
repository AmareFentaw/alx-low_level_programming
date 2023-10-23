#include "main.h"
#include <stddef.h>
/**
 * _strstr - Write a function that locates a substring
 * @haystack: input
 * @needle: another input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h && *n && *h == *n)
			{
			h++;
			n++;
			}
			if (*n == '\0')
			{
			return (haystack);
			}
		}
	haystack++;
	}
	return (NULL);
}
