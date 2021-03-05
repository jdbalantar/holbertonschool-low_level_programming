#include "holberton.h"
/**
 * *_strncpy - This function that compares two strings.
 * @dest : external input
 * @src: external input
 * @n: external input
 * Return:char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char *point = dest;

	while (src[count] && n)
	{
		dest[count] = src[count];
		dest++;
		src++;
		n--;
	}

	while (n--)
	{
		dest[count] = '\0';
		dest++;
	}

	return (point);
}
