#include <stdio.h>

/**
 * *_strpbrk - Write a function that searches a string for any of a setofbytes.
 * @s:external input
 * @accept:external input
 * Return:0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int x = 0;

		while (accept[x])
		{
			if (accept[x] == *s)
				return (s);
			x++;
		}
		s++;
	}
	return (0);
}
