#include "holberton.h"
#include <stdio.h>

/**
 * _abs - print absolute value
 * Return: int
 * @x: input character
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (-a);
	}
}
