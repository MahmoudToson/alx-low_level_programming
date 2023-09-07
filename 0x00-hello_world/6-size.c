#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using size of to print size of types
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
printf("size of a char: %u byte(s)\n".sizeof(char));
printf("size of a int: %u byte(s)\n".sizeof(int));
printf("size of a long int: %u byte(s)\n".sizeof(long int));
printf("size of a long long int: %u byte(s)\n".sizeof(long long int));
printf("size of a float: %u byte(s)\n".sizeof(float));
return (0);
}
