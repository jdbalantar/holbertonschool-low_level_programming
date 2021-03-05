  #include "holberton.h"
/**
 * _strcmp - function compares two strings.
 * @s1:external input
 * @s2:external input
 * Return:char
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return  (0);
	}

	else
	{
		return  (*s1 - *s2);
	}

}
