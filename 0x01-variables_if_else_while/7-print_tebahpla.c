#include <stdio.h>
/**
 *main - entry point
 *
 *Description: print alphabet lowercase in reverse
 *
 *Return: 0 (success)
*/
int main(void)
{
char n = 'z';
while (n >= 'a')
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
