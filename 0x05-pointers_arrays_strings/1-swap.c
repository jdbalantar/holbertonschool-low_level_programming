#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: int
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
