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
	int amare = 0, a;

	while (dest[amare])
	{
		amare++;
	}


	for (a = 0; src[a] != 0; a++)
	{
		dest[amare] = src[a];
		amare++;
	}

	dest[amare] = '\0';
	return (dest);
}
