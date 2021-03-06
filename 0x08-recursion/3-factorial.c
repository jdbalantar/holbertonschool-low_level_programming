#include "holberton.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n:external input
 * Return:int
 */

int factorial(int n)
{
	int frl = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (1);
	}
	frl = n * factorial(n - 1);
	return (frl);
}
