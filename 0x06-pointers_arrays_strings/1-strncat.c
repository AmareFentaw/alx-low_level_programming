#include <stdio.h>
#include <string.h>

/**
 * main - concatenate that is not null-terminated
 * Return: 0
 */
int main(void)
{
	char dest[100] = "Hello, ";
	char src[] = "world!";

	src[4] = '\0';
	_strncat(dest, src, 5);
	printf("%s\n", dest);

	return (0);
}
