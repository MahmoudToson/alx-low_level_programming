#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base ten using putchar
 *
 * Return: 0 (Success)
*/
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
