#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: external input
 * @n:external input
 * Return:0
 */
void reverse_array(int *a, int n)
{
	int x = 0, y, arr;

	y = n - 1;

	for (x = 0; x < n / 2; x++, y--)
	{
		arr = a[x];
		a[x] = a[y];
		a[y] = arr;
	}
}
