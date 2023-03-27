#include<stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: the first parameter
 * @b: the second parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
