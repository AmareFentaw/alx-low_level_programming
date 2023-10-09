#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int h, j;

        h = 0;
        while
                (h < 10) {
                        putchar(h + '0');
                        h++;
                }
        j = 'a';
        while
                (j <= 'f') {
                        putchar(j);
                        j++;
                }
        putchar('\n');
        return (0);
}
