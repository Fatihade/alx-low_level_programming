#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character c to stdout
 * @c: the charcter to be printed
 *
 * Return: 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
