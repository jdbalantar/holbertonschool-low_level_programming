#include <stdio.h>
/**
 * main - prints ABC
 *
 *Return: int
 */
int main(void)
{
char min, may;
for (min = 'a' ; min <= 'z' ; min++)
{
putchar(min);
}
putchar ('\n');
for (may = 'A' ; may <= 'Z' ; may++)
{
putchar(may);
}
putchar ('\n');
return (0);
}
