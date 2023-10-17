#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random valid password
 * Return: 0
 */
int main(void)
{
	char pass[84];
	int i = 0, s = 0, amare, john;

	srand(time(0));

	while (s < 2772)

	{
		pass[i] = 33 + rand() % 94;
		s += pass[i++];
	}

	pass[i] = '\0';

	if (s != 2772)
	{
		amare = (s - 2772) / 2;
		john = (s - 2772) / 2;

		if ((s - 2772) % 2 != 0)

		for (i =  0; pass[i]; i++)


			pass[i] -= amare;

	}
	printf("%s", pass);
	return (0);
}

