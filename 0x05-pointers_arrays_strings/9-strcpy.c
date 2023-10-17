#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: to be copied
 * @src: to be copied
 * Return: the copy
 */
char *_strcpy(char *dest, char *src)
{

	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
	dest[l] = src[l];
	}
	dest[l++]  = '\0';
	return (dest);
}
