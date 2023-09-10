#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet letters lowercase and uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
char n = 'a';
char N = 'A';

while (n <= 'z')
{
        putchar(n);
        n++;
}
putchar('\n');

while (N <= 'Z')
{
        putchar(N);
        N++;
}
putchar('\n');
return (0);
}
