#include "holberton.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s:external input
 * Return:0
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
