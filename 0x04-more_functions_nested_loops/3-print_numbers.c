#include "holberton.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9
 * Return: int
 */
void print_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		_putchar (m + '0');
	}
	_putchar ('\n');
}
