#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all letters except e and q
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char n = 'a';
while (n <= 'z')
{
if (n == 'e' || n == 'q')
n++;
putchar(n);
n++;
}
putchar('\n');
return (0);
}
