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
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = -num;
		_putchar(num + '0');
		return (num);
	}
	return (x);
}
