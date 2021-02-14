#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print numbers from N to 98
 * Return: int
 * @n: external input
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
