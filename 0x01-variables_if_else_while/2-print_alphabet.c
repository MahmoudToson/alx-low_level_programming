#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet letters lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
char n = 'a';

while (n <= 'z')
{
	putchar(n);
	n++;
}
putchar('\n');

return (0);
}
