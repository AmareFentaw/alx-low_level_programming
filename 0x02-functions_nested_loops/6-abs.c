#include "main.h"
/**
 * _abs - Identify the absoute velue.
 * @m: The num to identified or compute.
 * Return: Either  absoute value or 0
 */
int _abs(int m)
{
	if (m < 0)
	{
	int abs_val;

	abs_val = m * -1;
	return (abs_val);
	}
	return (m);
}
