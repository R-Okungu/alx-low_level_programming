#include "main.h"

/**
 * _memset - entry memory point
 * @s: the destination pointer
 * @b: constant byte
 * @n: bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
