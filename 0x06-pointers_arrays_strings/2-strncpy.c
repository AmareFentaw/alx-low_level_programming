#include "main.h"
/**
 * _strncpy - copy an inputted no
 * @dest: the one to stor the strint copy
 * @src: the string
 * @a: maximum number
 * Return: the rusulting string
 */
char *_strncpy(char *dest, char *src, int a)

{
	int amare = 0, src_len = 0;

	while (src[amare++])
	src_len++;
	for (amare = 0; src[amare] && amare < a; amare++)
	dest[amare] = src[amare];
	for (amare = src_len; amare < a; amare++)
	dest[amare] = '\0';

	return (0);
}
