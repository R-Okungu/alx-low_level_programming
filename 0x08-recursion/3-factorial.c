#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: the number given
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
