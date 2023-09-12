#include<unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * 0c : the character printed
 *
 * Return: On success 1.
 *          on error return -1 and errno is set appropriately*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

