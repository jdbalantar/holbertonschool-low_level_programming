#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: external input
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		for (i = 0; i <= *s; i++)
		{
			s = s + 1;
		}
	}
	return (i);
}
