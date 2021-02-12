#include "holberton.h"
#include <stdio.h>

/**
 * _abs - print absolute value
 * Return: int
 * @a: input character
 */

int _abs(int a)
{
	int a, d, r;
	if (a < 0)

	{
		d = a * 2;
		r = ((a - d));
		return (r);
	}
	else if (a >= 0)
	{
		return(a);
	}
}
