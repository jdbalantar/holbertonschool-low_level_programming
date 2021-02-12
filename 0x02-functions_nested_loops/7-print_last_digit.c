#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - print absolute value
 * Return: int
 * @num: input character
 */

int print_last_digit(int num)
{
	int x = (num % 10);

	if (num >= 0)
	{
		_putchar(x + '0');
		return (x);
	}
	else
	{
		num = -num;
		_putchar(x + '0');
		return (x);
	}
	return (x);
}
