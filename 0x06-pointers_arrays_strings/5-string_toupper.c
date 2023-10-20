#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char amare[] = "Look up!\n";
	char *temp;

	temp = string_toupper(amare);
	printf("%s", temp);
	printf("%s", amare);
	return (0);
}
