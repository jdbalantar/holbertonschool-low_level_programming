#include <stdio.h>
/**
 * main - prints
 *
 *Return: int
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if ((ch != 'q') && (ch != 'e'))
{
putchar (ch);
}
}
putchar ('\n');
return (0);
}
