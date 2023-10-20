#include "main.h"

/**
  * _strcmp - Compares two strings
  * @a: The first string
  * @b: The second string
  *
  * Return: int value
  */
int _strcmp(char *a, char *b)
{
	int x = 0, y = 0, z = 0, w = 0, amare;

	while (a[x])
	{
		x++;
	}

	while (b[y])
	{
		y++;
	}
	if (x <= y)
	{
		amare = x;
	}
	else
	{
		amare = y;
	}
	while (z <= amare)
	{
		if (a[z] == b[z])
		{
			z++;
			continue;
		}
		else
		{
			w = a[z] - b[z];
			break;
		}
		z++;
	}
	return (w);
}
