#include "main.h"

/**
 *_isalpha - checks if input c is a letter
 *
 * @c: takes input from other function
 *
 *Return: 1 if c is a letter otherwise 0 (success)
 *
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
