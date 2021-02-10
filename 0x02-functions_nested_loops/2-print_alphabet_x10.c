#include "holberton.h"
/**
 * print_alphabet_x10 - main
 *
 * Return: int
 */
void print_alphabet_x10(void)
{

	char alpha;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');

	}


}
