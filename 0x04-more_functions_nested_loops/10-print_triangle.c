#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size:external input
 * Return:(0)
 */
void print_triangle(int size)
{
	int i, j, r;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			r = size - i;
			if (j <= r)
			{
				_putchar (' ');
			}
			else
			{
				_putchar ('#');
			}
		}
		_putchar (10);
	}
}
