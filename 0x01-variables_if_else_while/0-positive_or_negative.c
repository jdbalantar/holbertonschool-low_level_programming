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
printf("is positive");
}
if
(n == 0)
printf("is zero");
else if
(n < 0)
printf("is negative");
return (0);
}
