#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: 0
 */

int main(void)

{

	long a, maxf;
	double square = sqrt(number);
	long umber = 612852475143;

	for (a = 1; a <= square; a++)
	{
	if (number % a == 0)
	{
	maxf = number / a;
	}
	}
	printf("%ld\n", maxf);
	return (0);

}
