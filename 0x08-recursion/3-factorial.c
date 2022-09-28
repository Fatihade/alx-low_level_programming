#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial
 *
 * Return: If n < 0, return -1 to indicate error
 *	   if n > 0, return the factorial of n.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
