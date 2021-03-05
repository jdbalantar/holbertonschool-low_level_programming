#include <stdio.h>
/**
 * *_strncat - function that concatenates two strings.
 * @dest: Pointer receives data from src
 * @src: pontter that send data from dest
 * @n: n cant of data
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
		x++;

	while (src[y] && n--)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
