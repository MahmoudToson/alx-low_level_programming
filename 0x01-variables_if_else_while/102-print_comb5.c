#include<stdio.h>

/**
 * main -entry point
 *
 * Description: print numbers to 99
 *
 * Return: 0 (success)
*/
int main(void)
{
int n = 0;
int n2;
while (n <= 99)
{
n2 = n;
while (n2 <= 99)
{
if (n2 != n)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
putchar(' ');
putchar((n2 / 10) + 48);
putchar((n2 % 10) + 48);
if (n != 98 || n2 != 99)
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
