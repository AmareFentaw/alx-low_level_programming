#include "main.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: array
 * Return: result
 */
void print_chessboard(char (*a)[8])
{
	int l, m;

	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[l][m]);
		}
		_putchar('\n');
	}
}
