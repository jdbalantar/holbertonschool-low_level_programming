#include "holberton.h"
/**
 * puts_half - Write a function that prints half of a string
 * @str:exteral input
 * Return:(0)
 */
void puts_half(char *str)
{
	int x = 0, y = 0;

	int i;

	while (str[x] != '\0')
	{
		x++;
	}

	if ((x % 2) == 0)
	{
		i = x / 2;
	}
	else
	{
		i = (x + 1) / 2;
	}
	for (y = i; y < x; y++)

		_putchar (str[y]);

	_putchar (10);
}
