#include <unistd.h>


/**
 * __putchar - writes the character c to stdout 
 * @c: The character to be printed 
 * Return: On Success 1.
 * On error , -1 is returned, and erno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
