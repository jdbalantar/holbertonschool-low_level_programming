#include "holberton.h"
/**
 * reset_to_98 - update parameter of n
 * @n: external input
 * Return: int
 */
void reset_to_98(int *n)
{
	int numero = *n;

	numero = 98;
	*n = numero;
}
