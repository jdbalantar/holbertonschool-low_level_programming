#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: external input
 * Return: linex
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar ('_');
			i++;
		}
	}
	_putchar ('\n');
}
