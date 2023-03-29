#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: parameter given
 * Return: string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
