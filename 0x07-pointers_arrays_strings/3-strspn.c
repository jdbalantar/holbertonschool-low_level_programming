#include <stdio.h>

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s:external input
 * @accept:external input
 * Return:int
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, n = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
