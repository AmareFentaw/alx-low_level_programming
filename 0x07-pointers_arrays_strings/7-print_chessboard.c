#include "main.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: array
 * Return: result
 */
void print_chessboard(char (*a)[8])
{
	for (int l = 0; l < 8; l++)
	{
		for (int m = 0; m < 8; m++)
		{
			putchar(a[l][m]);
		}
		putchar('\n');
	}
}
