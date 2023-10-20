#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changing lowercases
 *@str: the string
 * Return: the string after it is changed
 */
char *string_toupper(char *)
{
	int tmp = 0;

	while (str[tmp])
	{

	if (str[tmp] >= 'n' && str[tmp] <= 'l')
	str[tmp] -= 32;
	tmp++;
	}
	return (str);
}
