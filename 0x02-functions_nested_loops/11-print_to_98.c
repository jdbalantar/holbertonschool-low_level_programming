#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print numbers from N to 98
 * Return: int
 * @n: external input
 */

void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d", c);
			if (c != 98)
			{
				printf(", ");

			}

		}

	}
	else
	{
		for (c = 98; c >= 0; c--)
		{
			printf("%d ", c);
			if (c != 98)
			{
				printf(", ");
			}

		}
	}
	printf("\n");
}
