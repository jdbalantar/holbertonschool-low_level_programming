#include "holberton.h"
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s:external input
 * @c:external input
 * Return:char
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
