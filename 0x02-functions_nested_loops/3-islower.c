#include "holberton.h"
/**
 * _islower - main
 * Return: 0
 * @c: parameter for function _islower
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
