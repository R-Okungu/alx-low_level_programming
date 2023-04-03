#include "main.h"

/**
 * _memcpy - memory entry point
 * @dest: input parameter
 * @src: source input
 * @n: input vaue
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
