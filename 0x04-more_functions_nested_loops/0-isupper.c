#include "holberton.h"
/**
 * _isupper - The standard library provides a similar function: isupper
 * Return: int;
 * @c: External input
 */
int _isupper(int c)

{
	if (c >= 'a' || c <= '<')
	{
		return (0);
	} else if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	return (c);
}