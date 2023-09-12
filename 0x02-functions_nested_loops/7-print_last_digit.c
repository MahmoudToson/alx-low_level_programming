#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: takes number from function
 *
 * Return: lastNum
*/
int print_last_digit(int n)
{
int lastNum;
if (n < 0)
lastNum = (n % 10) * -1;
else
lastNum = n % 10;
_putchar(lastNum + '0');
return (lastNum);
}
