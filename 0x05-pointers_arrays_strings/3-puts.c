#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: external input
 * Return: (0)
 */
void _puts(char *str)

{

	short int i = 0;

	do

	{
		_putchar (str[i]);
		i++;

	} while (str[i] > 0);
	_putchar(10);
}
