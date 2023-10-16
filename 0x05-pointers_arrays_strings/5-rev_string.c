#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int l = 0, n = strlen(s) - 1;
	char temp;

	while (l < n)
	{
	temp = s{l};
	s[l] = s[n];
	s[n] = tmp;
	l++;
	n--;
	}
}
