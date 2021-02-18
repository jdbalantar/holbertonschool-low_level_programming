#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: slash
 * @n: external input
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar ('\\');
			_putchar ('\n');
			i++;
		}
	}
	_putchar ('\n');
}
