#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers fromzero to nine
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int num = 0;
while (num <= 9)
{
printf("%i", num);
num++;
}
printf("\n");
return (0);
}
