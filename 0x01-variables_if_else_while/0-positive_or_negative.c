#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints asdasdasd asdasdasd asdasd
 *
 * Return: int
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive %d", n);
}
else if (n == 0)
{
printf("is zero %d", n);
}
else
{
printf("is negative %d", n);
}
return (0);
}
