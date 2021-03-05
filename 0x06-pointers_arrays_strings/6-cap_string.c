#include "holberton.h"
/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @s:Pointer parameter
 * Return:char
 */
char *cap_string(char *s)
{
	int x = 0, y;
	int sep = 13;
char c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		y = 0;

	while (y < sep)
	{
	if ((x == 0 || s[x - 1] == c[y]) && (s[x] >= 'a' && s[x] <= 'z'))
	s[x] -= 32;

			y++;
		}

		x++;
	}

	return (s);
}
