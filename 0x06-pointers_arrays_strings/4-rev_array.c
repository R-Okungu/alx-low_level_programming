#include "main.h"

/**
 * reverse_array - reverse the array given
 * @a: the parameter
 * @n: number of arrays
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1 - i] = j;
	}
}
