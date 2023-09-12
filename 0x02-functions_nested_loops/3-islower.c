#include "main.h"

/**
 * _islower - function to check if character is lowercase
 *
 *
 * 0c: checks input 'c' of function
 *
 * Return: returns 1 if 'c' is lowercase
 *   otherwise always 0 (success)
*/
int _islower(int c)
{
int r;
if (r >= 97 && r <= 122)
return (1);
return (0);
}
