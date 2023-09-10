#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet letters lowercase and uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
char n = 'a';
char N = 'A';

/* prints lowercase*/
while (n <= 'z')
{
putchar(n);
n++;
}
/* prints uppercase*/
while (N <= 'Z')
{
putchar(N);
N++;
}
putchar('\n');

return (0);
}
