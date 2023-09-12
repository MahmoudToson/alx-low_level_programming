#include "main.h"

/**
 * times_table - prints table of multiples of nine
 *
*/
void times_table(void)
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
if (i != 9)
{
_putchar(' ');
}
else
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
_putchar('\n');
}
}
