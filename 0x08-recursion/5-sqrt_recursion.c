#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 * Return: a value when successful
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural square root
 * @n: the number to calculate the squareroot
 * @i: iterate number
 * Return: natural squareroot
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
