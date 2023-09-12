#include "main.h"

/**
 *   print_times_table - print table n times
 *
 * @n: input
*/
void print_times_table(int n)
{
int i;
int j;
int n;
for (j = 0; j <= 9; j++)
{
_putchar(48);
for (i = 1; i <= 9; i++)
{
_putchar(',');
_putchar(' ');
n = i * j;
if (n <= 9)
{
_putchar(' ');
}
if (n <= 99)
{
_putchar(' ');
}
if (n >= 100)
_putchar((n / 100) + 48);
_putchar((n / 10) % 10 + 48);
}
else if (n <= 99 && n >= 10)
{
_putchar((n / 10) + 48);
_putchar((n / 10) % 10 + 48);
}
_putchar('\n');
}
}
