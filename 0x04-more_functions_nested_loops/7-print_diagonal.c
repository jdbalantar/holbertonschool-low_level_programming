#include "holberton.h"
/**
 * print_diagonal-  draws a diagonal line on the terminal
 * @number:external input
 * Return:(0)
 */
void print_diagonal(int number)
{
	int a, b;

	if (number > 0)
	{
		for (a = 0; a < number; a++)
		{
			for (b = 0; b < number; b++)
			{
				if (a > b)
				{
					_putchar (' ');
				}
				if (a == b)
				{
					_putchar ('\\');
				}
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
