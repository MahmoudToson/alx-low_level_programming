#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print a combination of two different numbers
 *
 * Return: 0 (success)
*/
int main(void)
{
int n = 0;
int n2;
while (n <= 9)
{
n2 = 0;
while (n2 <= 9)
{
if (n != n2 && n < n2)
{
putchar(n + 48);
putchar(n2 + 48);
if (n + n2 != 17)
{
putchar(',');
putchar(' ');
}
}
n2++;
}
n++;
}
putchar('\n');
return (0);
}

