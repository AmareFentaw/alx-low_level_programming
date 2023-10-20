#include "main.h"

/**
 * _strncat - concatenate that is not null-terminated
 * @dest: string
 * @src: anotehr string
 * @w: number of bytes
 * Return: resultint string dest
 */
char *_strncat(char *dest, char *src, int w)
{
	int amare = 0, dest_len = 0;

	while (dest[amare++])
	dest_len++;
	for (amare = 0; src[amare] && amare < w; amare++)
	dest[dest_len++] = src[amare];
	return (dest);
}
