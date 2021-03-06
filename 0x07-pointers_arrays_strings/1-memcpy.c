#include <stdio.h>
/**
 * *_memcpy - Write a function that copies memory area.
 * @n:external input
 * @src:external input
 * @dest:external input
 * Return:char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
