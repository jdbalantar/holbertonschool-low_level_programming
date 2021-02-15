#include "holberton.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: 1st parameter
 * @b: 2nd parameter
 * @c: 3rd parameter
 * Return: int - largest parameter
 */
int largest_number(int a, int b, int c)
{
	int n;

	if (a >= b && a >= c)
	{
		n = a;
	}
	else if (b >= a && b >= c)
	{
		n = b;
	}
	else
	{
		nargest = c;
	}
	return (n);
}
