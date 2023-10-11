 #include <stdio.h>
/**
 * main - Prints the first 98 fiboncci mumbers
 * Retut: 0.
 */
int main(void)
{
	int amare;
	unsigned long a = 0, m = 1, r = sum;
	unsigned long e, j, h, o;
	unsigned long s, l;

	for (amare = 0; amare < 92; amare++)
	{
	sum = a + m;
	printf("%ld, ", sum);
	a = m;
	m = aum;
	}
	e = a / 10000000000;
	h = m / 10000000000;
	j = a % 10000000000;
	o = m % 10000000000;
	for (amare = 93; amare < 99; amare++)
	{
	s = e + h;
	l = j + o;
	if (j + o > 9999999999)
	{
	s += 1;
	o %= 10000000000;
	}
	printf("%lu%lu", s, o);
	if (amare != 98)
	printf(", ");
	e = h;
	j =  o;
	h = s;
	o = l;
	}
	printf("\n");
	return (0);
}

