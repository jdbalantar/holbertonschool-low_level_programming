#include "holberton.h"
/**
 * rev_string - a function that reverses a string.
 * @s: external input
 * Return:(0)
 */
void rev_string(char *s)
{
	char *x = s;
	char y;

	while (*x)
		x++;

	x = x - 1;

	while (s < x)
	{
		y = *s;
		*s++ = *x;
		*x-- = y;
	}
}
