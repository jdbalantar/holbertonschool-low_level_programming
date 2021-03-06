#include "holberton.h"
/**
 * *_strstr - function that locates a substring.
 * @haystack:external input
 * @needle:external input
 * Return:char
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;

	while (haystack[x])
	{
		if (haystack[x] == needle[y])
		{
			y++;
			if (needle[y] == '\0')
			{
				return ((haystack + x) - (y - 1));
			}
		}
		else
			y = 0;
		x++;
	}
	if (*needle == '\0')
		return (haystack);
	return (0);
}
