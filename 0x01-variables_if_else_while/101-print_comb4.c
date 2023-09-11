#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print combination of three different numbers
 *
 * Return: 0 (success)
*/
int main(void)
{
int n = 0;
int n2, n3;
while (n <= 9)
{
n2 = 0;
while (n2 <= 9)
{
n3 = 0;
while (n3 <= 9)
{
if (n != n2 && n < n2 && n2 != n3 && n2 < n3)
{
putchar(n + 48);
putchar(n2 + 48);
putchar(n3 + 48);
if (n + n2 + n3 != 24)
{
putchar(',');
putchar(' ');
}
}
n3++;
}
n2++;
}
n++;
}
putchar('\n');
return (0);
}

