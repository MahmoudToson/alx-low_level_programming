#include "main.h"

/**
 * main - entry point
 *
 * Description: print (__putchar)
 *
 * Return: always 0 (success)
*/
int main(void)
{
char str[] = "_putchar";
int n;
for (n = 0; n < 8; n++)
_putchar(str[n]);
_putchar("\n");
return (0);
}
