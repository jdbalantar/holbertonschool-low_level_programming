#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 *  Return: Returns the square root or -1
 * @n: Number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - check the square root
 * Return: Returns the square root or -1
 * @i: result
 * @n: number
 */


int _sqrt(int i, int n)
{
	int x = i * i;

	if (x > n)
	{
		return (-1);
	}
	if (x == n)
	{
		return (x);
	}
	return (_sqrt(x + 1, n));
}
