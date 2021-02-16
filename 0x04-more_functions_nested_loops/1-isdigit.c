#include "holberton.h"
/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 * Return: int;
 * @c: External input
 */
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
