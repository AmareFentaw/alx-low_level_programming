#include "main.h"

/**
 * _isalpha - Entry point
 * @m: The  character
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int m)
{
	if ((m >= 65 && m <= 90) || (m <= 122))
	{
	return (1);
	}
	return (0);
}
