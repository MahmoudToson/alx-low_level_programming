#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print hexadecimal numbers
 *
 * Return: 0 (success)
*/
int main(void)
{
int n = 0;
char s = 'a';
while (n <=  9)
{
putchar(n + '0');
n++;
}
while (s <= 'f')
{
putchar(s);
s++;
}
putchar('\n');
return (0);
}
