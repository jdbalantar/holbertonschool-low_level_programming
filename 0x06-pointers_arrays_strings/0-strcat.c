#include "holberton.h"
/**
 * *_strcat - This function that concatenates two strings.
 * @dest:external input
 * @src:external input
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x])
		x++;

	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
