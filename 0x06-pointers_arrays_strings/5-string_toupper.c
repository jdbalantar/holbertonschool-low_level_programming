#include "holberton.h"
/**
 * *string_toupper - Write a function that changes all lowercase to uppercase
 * @s: external input
 * Return:char
 */
char *string_toupper(char *s)
{
	int x = 0, y = 0;

	while (s[y])
	{
		y++;
	}

	while (x < y)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
		x++;
	}
	return (s);


}
