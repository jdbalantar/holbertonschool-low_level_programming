#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: external input
 * Return: (0)
 */
void _puts(char *str)

{


	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}
	_putchar(10);
}
