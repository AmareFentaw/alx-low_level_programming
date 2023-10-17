#include <stdio.h>
/**
 * _atoi - from string to an integer.
 * @s: pointer
 * Return: an integer.
 */
int _atoi(char *s)
{
	int b = 0;

	unsigned int eden = 0;
	int cut = 1;
	int amare = 0;

	while (s[b])
	{
	if (s[b] == 45)
	{
	cut *= -1;
	}
	while (s[b] >= 48 && s[b] <= 57)
	{
	amare  = 1;
	eden  = (eden * 10) + (s[b] - '0');
	b++;
	}
	if (amare == 1)
	{
	break;
	}
	c++;
	}
	eden *= cut;
	return (eden);
}
