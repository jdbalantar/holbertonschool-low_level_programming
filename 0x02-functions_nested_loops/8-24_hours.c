#include "holberton.h"

/**
 * jack_bauer - print minutes and hours of day
 * Return: 0
 */

void jack_bauer(void)
{

	int h, m, h2, m2;

	for (h = 0; h <= 2; h++)
	{
		for (h2 = 0; h2 <= 3; h2++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar (h + '0');
					_putchar (h2 + '0');
					_putchar (':');
					_putchar (m + '0');
					_putchar (m2 + '0');
					_putchar ('\n');
					if ((h == 2) && (h2 == 3)
					    && (m == 5) && (m2 == 9))
					{
						h2 = 10;
						h = 3;
						m = 7;
					}
				}
			}
		}
	}
}
