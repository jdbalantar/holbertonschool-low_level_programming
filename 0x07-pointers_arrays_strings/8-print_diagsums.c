#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a:external input
 * @size:external input
 * Return:0
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int dia1 = 0;
	int dia2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		dia1 += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		dia2 += a[j];
	}
	printf("%d, %d\n", dia1, dia2);
}
