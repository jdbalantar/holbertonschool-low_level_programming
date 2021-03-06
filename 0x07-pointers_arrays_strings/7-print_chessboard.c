#include "holberton.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a:external input
 * Return:(0)
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
}
}
