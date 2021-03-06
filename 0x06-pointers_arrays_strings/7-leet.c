#include "holberton.h"
/**
 * *leet - Write a function that encodes a string into 1337.
 * @s:external input
 * Return:char
 */

char *leet(char *s)
{
	int x, y;
	char cav[] = "aAeEoOtTlL";
	char can[] = "4433007711";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (cav[y] == (s[x]))
				(s[x]) = can[y];
		}
	}
	return (s);
}
