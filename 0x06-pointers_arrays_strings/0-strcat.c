#include <stdio.h>
#include "main.h"
/**
 * char *_strcat - cincatenate charactors
 * @dest: one character to be concatenated
 * @src: another charactor to be concatenated
 * Return: concatenated charactors
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = src++;
	}
	*dest = '\0';
	return (dest);
}
