#include "holberton.h"

/**
 * jack_bauer - print minutes and hours of day
 * Return: 0
 */

void jack_bauer(void)
{
	int horas, minutos;

	for (horas = 0; horas <= 23; horas = horas + 1)
	{
		for (minutos = 0; minutos <= 59; minutos = minutos + 1)
		{
			_putchar((horas / 10) + '0');
			_putchar((horas % 10) + '0');
			_putchar(':');
			_putchar((minutos / 10) + '0');
			_putchar((minutos % 10) + '0');
			_putchar('\n');
		}
	}

}
