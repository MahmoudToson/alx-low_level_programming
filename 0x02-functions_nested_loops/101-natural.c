#include "main.h"

/**
 * main - entry point
 *
 * Description: adds the sum of 3 and 5 multiples below 1024
 *
 * Return: always 0 (success)
*/
int main(void)
{
int sum, n;
for (n = 0; n < 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
sum += n;
}
printf("%d\n", sum);
return (0);
}

