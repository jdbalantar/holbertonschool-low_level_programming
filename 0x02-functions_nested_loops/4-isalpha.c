#include "holberton.h"
/**
 * _isalpha - main
 * Return: Always 0 or 1.
 * @c: input character
 */
int _isalpha(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
		}
