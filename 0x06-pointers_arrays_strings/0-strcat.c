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
	int amare = 0;

	while (dest[amare] != '\0')
	{
	amare++;
	}


	int a = 0;

	for (a = 0; src[a] != 0; a++)
	{
	dest[amare + a] = src[a];
	}

	dest[amare + strlen(src)] = '\0';
	return (dest);
}
