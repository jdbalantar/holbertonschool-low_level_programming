#include "holberton.h"
/**
 * validar - check if the number is prime or not
 *  Return: return one if it is prime and zero otherwise
 * @n: Number to valide
 * @i: factor
 */

int validar(int i, int n)
{
	if (n % i == 0 || n < 2)
		return (0);
	if (n % i != 0 && n % 5 != 0)
		return (1);
	return (validar(i + 1, n));
}

/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n: Number to valide
 * Return: return 1, otherwise 0
 */


int is_prime_number(int n)
{
	return (validar(2, n));
}
