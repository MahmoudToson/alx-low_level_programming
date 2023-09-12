#include "main.h"

/**
 * print_sign - prints sign + if n is positive, - if negative and 0 if zero
 *
 * @n: takes integer type from function
 *
 * Return: returns 1 if postive, -1 if negative and 0 if 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
_putchar('-');
return (-1);
}
