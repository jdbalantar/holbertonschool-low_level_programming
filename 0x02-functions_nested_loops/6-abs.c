#include "holberton.h"
#include <stdio.h>

/**
 * _abs - print absolute value
 * Return: int
 * @x: input character
 */

int _abs(int x)
{
	if (x < 0)

	{
		return(-x);
	}
	else if (x >= 0)
	{
		return(x);
	}
}
