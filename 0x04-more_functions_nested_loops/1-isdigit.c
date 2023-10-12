#include "main.h"
/**
 *  _isdigit - Identify if the input is digit or not
 *  @c: The digit to be identifide
 *  Return: 1 if c is the digit or 0 if it is not
 */
int  _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
