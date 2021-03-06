#include "holberton.h"
/**
 * _puts_recursion - This function prints a string, followed by a new line
 * @s: Pointer that contain a string
 * Return:(0)
 */
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar (s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar ('\n');
	}
}
