#include <stdio.h>

/**
 * print_to_98 - print numbers from N to 98
 * Return: int
 * @n: external input
 */

void print_to_98(int n)
{

	int c;

	for (c = n; c <= 98; c++)
{
		printf("%d ", c);
		printf(" ");
	}
	putchar('\n');
}
