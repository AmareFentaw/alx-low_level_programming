#include <unistd.h>

/**
 * main - prints "and that piece of art is useful\" -Dora Korpar, 2015-10-19",
 * followed by a newline, to standard error in chunks of 59 character.
 * Return: Always 1.
 */
int main(void)
{
	char *message = "and that piece of art is useful\" -Dora Korpar,2015-10-19\n";
	int message_length = strlen(message);
	int i;

	for (i = 0; i < message_length; i += 59)
	{
	write(STDERR_FILENO, message + i, 59);
	}
	return (1);
}
