#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: external input
 * Return:(0)
 */
void puts2(char *str)
{
	int x = 0, y = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y = y + 2)
	{
		_putchar (str[y]);
	}
	_putchar (10);

}
